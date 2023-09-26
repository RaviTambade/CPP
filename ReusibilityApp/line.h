#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include "Point.h"
class Line : public Shape
{
	public:
		Line();
		Line(Point pt1, Point pt2, int t,string c);
		~Line();
		 void display();
	protected:
		Point startPoint, endPoint;
};

#endif
