#include <iostream>
#include<stdlib.h>
#include "Header.h"
using namespace std;

int main() {
	Point p1(2, 2), p2(8, 8), p3(2, 8), p4(16, 8);
	Board b(20, 10);

	//b.draw_line(p1, p2, 'x');
	//b.draw_line(p3, p4, 'x');
	//b.draw_char(p1, 'x');
	b.draw_up_line(p1, 'x');
	b.display();

	return 0;
}