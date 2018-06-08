#include "Rectangle.h"


Rectangle::Rectangle(const Point& pl , const Point& pr)
{
	this->m_lowerLeft  = pl;
	this->m_upperRight = pr;
}
double
Rectangle::calcArea()
{
	return (m_upperRight.getx() - m_lowerLeft.getx()) * (m_upperRight.gety() - m_lowerLeft.gety());
	
}
Rectangle::~Rectangle()
{
}
