#ifndef LINE_H
#define LINE_H
#include <iostream>
#include <fstream>
#include "Shape.h"
#include "Point.h"

using namespace std;

class Line : public Shape
{
	public:
		Line();
		Line(Point pt1, Point pt2, int t,string c);
		~Line();
		 void display();
		 virtual void load(ifstream& in);
  		 virtual void save(ofstream& out);
	protected:
		Point startPoint, endPoint;
};

#endif
