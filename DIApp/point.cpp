#include <iostream>
using namespace std;
#include "point.h"

Point::Point() {
	this->x=this->y=0;
}

Point::Point(int xx, int yy) {
	this->x=xx;
	this->y=yy;
}

void Point::setX(int xx) {
	this->x=xx;
}

int Point::getX() {
	return this->x;
}


void Point::setY(int yy) {
	this->y=yy;
}

int Point::getY() {
	return 	this->y;
}

void Point::display(){
	cout<< "{X="<<x<< ", Y="<<y <<"}";
}
