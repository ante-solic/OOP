#include <iostream>
#include "Header.h"	

using namespace std;

void Board::set(int rows, int cols) {
	this->rows = rows;
	this->cols = cols;
}

void Board::allocate(int rows, int cols,char **matrix) {
	matrix = new char* [rows];
	for (int i = 0; i < rows; i++)
		matrix[i] = new char[cols];

	this->matrix = matrix;
}

void Board::fill_matrix(int rows,int cols,char *frame,char **matrix) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++){
			if ((i == 0) || (j == 0) || (i == rows - 1) || (j == cols - 1))
				matrix[i][j] = *frame;
		}
	}
}

/*
void Board::print_matrix(int rows, int cols, char* frame, char** matrix) {
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			if ((i == 0) || (j == 0) || (i == cols - 1) || (j == rows - 1))
				cout << matrix[i][j];
			else
				cout << " ";
		}
		cout << "\n";
	}
}
*/

void Board::draw_line(Point p1, Point p2, char ch) {
	int x1, y1, x2, y2;
	p1.get(&x1, &y1);
	p2.get(&x2, &y2);

	int j = y1;
	if(x1<x2 && y1<y2){
		for (int i = x1; i <= x2; i++) {
			this->matrix[i][j] = ch;
			j = j + 1;
		}
		return;
	}
	else if (x1 < x2 && y1 == y2) {
		for (int i = x1; i <= x2; i++) {
			this->matrix[i][j] = ch;
		}
		return;
	}
	
	
}

void Board::draw_up_line(Point p, char ch) {
	int x, y;
	p.get(&x, &y);
	while (x != 0) {
		this->matrix[x][y] = ch;
		x--;
	}
}

void Board::draw_char(Point p, char ch) {
	int x, y;
	p.get(&x, &y);
	this->matrix[x][y] = ch;
}

void Board::display() {

	for (int i = 0; i < this->rows; i++) {
		for (int j = 0; j < this->cols; j++) {
			if (this->matrix[i][j] == 'o')
				cout << this->matrix[i][j];
			else if (this->matrix[i][j] == 'x')
				cout << this->matrix[i][j];
			else
				cout << " ";
		}
		cout << endl;
	}
}

void Point::set(double x, double y) {
	this->x = x;
	this->y = y;
}

void Point::get(int* x, int* y) {
	*x = floor(this->x);
	*y = floor(this->y);
}