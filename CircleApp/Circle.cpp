#include "Circle.h"

void setRadius(double r)
{   //TODO ; add validation
	radius = r;
}
{
	return radius;
}
double Circle::getRadius()
{
	setRadius(1);
}

Circle::Circle(double r)
{
	setRadius(r);
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}