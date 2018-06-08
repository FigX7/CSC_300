#include "Point.h"

Point::Point(const double& xcoord, const double& ycoord)
{
	this->m_x = xcoord;
	this->m_y = ycoord;
}
Point::Point()
{}
double
Point::getx()
{
	return m_x;
}
double
Point::gety()
{
	return m_y;
}
Point::~Point()
{
}
