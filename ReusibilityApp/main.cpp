#include <iostream>
#include "point.h"
#include "line.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main(int argc, char** argv) {
	
	cout<<"welcome to CPP\n";
	Point pt1;
	pt1.display();
	
	Point pt2(100,100);
	pt2.display();
	
	int thickness=3;
	Point startPoint(23,43);
	Point endPoint(55,55);
	
	Line l1(startPoint, endPoint, thickness, "red");
	l1.display();
	
	Point startPoint2(12,10);
	Point endPoint2(56,155);
	int thickness2=4;
	Line l2(startPoint2, endPoint2, thickness2, "green");
	l2.display();
	
	Rectangle r1(startPoint2, endPoint2, thickness2, "blue");
	r1.display();
	
	Point center(45,45);
	Circle c1(center, thickness2, "blue");
	c1.display();
	return 0;
}
