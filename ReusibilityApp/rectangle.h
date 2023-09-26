#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include "point.h"
class Rectangle : public Shape
{
	private:
			Point startPoint, endPoint;
	public:
		Rectangle();
		Rectangle(Point pt1, Point pt2, int t,string c);
		~Rectangle();
		float calculateArea();
        void display();	
};
#endif
