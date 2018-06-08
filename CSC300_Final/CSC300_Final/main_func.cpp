#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
	Point p1(8.0, 9.0);
	Point p2(3.0, 4.0);
	Rectangle r(p1, p2);
	
	cout << r.calcArea() << endl;
}
