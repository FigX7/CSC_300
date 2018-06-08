#pragma once
class Point
{
public:
	Point(const double& m_x, const double& m_y);
	Point();
	~Point();
	double getx();
	double gety();
private:
	double m_x = 0.0;
	double m_y = 0.0;
};
