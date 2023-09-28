#include "shape.h"
#include <string>

using namespace std;

Shape::Shape()
{
	this->thickness=1;
	this->color="black";
}

Shape::Shape(int t, string c)
{
	this->thickness=t;
	this->color=c;
}

Shape::~Shape()
{
}
