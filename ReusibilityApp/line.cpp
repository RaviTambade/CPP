#include "line.h"
#include <iostream>
using namespace std;
Line::Line()
{
}

Line::Line(Point pt1, Point pt2, int t,string c):Shape(t,c)
{	
	this->startPoint=pt1;
	this->endPoint=pt2;
}

void Line::display(){
	cout<<"\n";
	cout<<" StartPoint :";
	this->startPoint.display();
	cout<<" EndPoint :";
	this->endPoint.display();
	cout<<" Thickness:"<<this->thickness;
	cout<<" Color:"<<this->color;
}

Line::~Line()
{
}
