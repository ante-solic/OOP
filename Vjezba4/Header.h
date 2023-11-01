#pragma once
#include <iostream>
using namespace std;

struct Point {
private:
	double x;
	double y;
public:
	Point() = default;
	Point(double x, double y) {
		set(x, y);
	};
	Point(const Point& p1) {
		x = p1.x;
		y = p1.y;
	}
	Point(Point&&) = default;
	~Point(){}
	void set(double x, double y);
	void get(int* x, int* y);
};

class Board {
	char** matrix;
	int rows = 0;
	int cols = 0;
	char frame = 'o';
	char ch = 'x';
public:
	Board() = default;
	Board(int rows, int cols) { 
		set(rows, cols);
		allocate(rows, cols, matrix);
		fill_matrix(rows, cols, &frame, matrix);
		//print_matrix(rows, cols, &frame, matrix);
	};
	Board(const Board& others) { cout << "Copy constructor!" << endl; };
	~Board() { delete[]this->matrix; };

	void set(int rows, int cols);
	void allocate(int rows, int cols, char** matrix);
	void fill_matrix(int rows, int cols, char* frame,char **matrix);
	//void print_matrix(int rows, int cols, char* frame, char** matrix);
	void draw_line(Point p1, Point p2, char ch);
	void draw_up_line(Point p, char ch);
	void draw_char(Point p, char ch);
	void display();
};

