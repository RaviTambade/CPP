#include "circle.h"
#include "point.h"
#include <iostream>
#include <string>

using namespace std;
Circle::Circle()
{
	Point pt;
	this->center=pt;
	this->radius=0;
	
}


Circle::Circle(Point c, int r, string color)
{
	this->center=c;
	this->radius=r;
	
}

float Circle::calculateArea(){
	
	float PI=3.14;
	float area=PI * this->radius * this->radius;
	return area;
}

void Circle::display(){
	cout<<"\n";
	cout<<" Center :";
	this->center.display();
	cout<<" Thickness:"<<this->thickness;
	cout<<" Color:"<<this->color;
	cout<<" Area of Circle: "<<this->calculateArea();
}




Circle::~Circle()
{
}
