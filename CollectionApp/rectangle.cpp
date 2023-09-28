#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(Point pt1, Point pt2, int t,string c):Shape(t,c)
{	
	this->startPoint=pt1;
	this->endPoint=pt2;
}


float Rectangle::calculateArea(){
	
	int x1=this->startPoint.getX();
	int x2=this->endPoint.getX();

	int y1=this->startPoint.getY();
	int y2=this->endPoint.getY();

	int height=y2-y1 ;
	int width=x2-x1;
	float area=height * width;
	return area;
}

void Rectangle::display(){
	cout<<"\n";
	cout<<" StartPoint :";
	this->startPoint.display();
	cout<<" EndPoint :";
	this->endPoint.display();
	cout<<" Thickness:"<<this->thickness;
	cout<<" Color:"<<this->color;
	cout<<" Area of Rectangle: "<<this->calculateArea();
}

Rectangle::~Rectangle()
{
}
