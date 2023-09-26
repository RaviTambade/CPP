#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include "point.h"
#include <string>
using namespace std;

class Circle:Shape
{
	private : 
			Point center;
			int radius;
	public:
		Circle();
		Circle(Point c, int r, string color);
		float calculateArea();
        void display();
		~Circle();
	protected:
};

#endif
