#include "triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle()
{
}

Triangle::Triangle(int bs, int ht, int t,string c):Shape(t,c)
{	
	this->base=bs;
	this->height=ht;
}


float Triangle::calculateArea(){
	float area= (0.5)* base * height ;
	return area;
}

void Triangle::display(){
	cout<<"\n";
	cout<<" base :";
	this->base;
	cout<<" height :";
	this->height;
	cout<<" Thickness:"<<this->thickness;
	cout<<" Color:"<<this->color;
	cout<<" Area of Triangle: "<<this->calculateArea();
}

Triangle::~Triangle()
{
}
