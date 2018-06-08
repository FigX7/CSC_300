#pragma once
#include "Point.h"
class Rectangle
{
public:
	
	Rectangle(const Point& l_left, const Point& u_right);
	double calcArea();
	~Rectangle();
private:
	Point m_lowerLeft;
	Point m_upperRight;


};

