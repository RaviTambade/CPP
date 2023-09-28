#include "line.h"
#include <iostream>
#include <fstream>
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

void Line:: load(ifstream& in){

	string line ;
    in.open ("line.txt"); 
	if ( in.is_open () )
	{	
		while ( getline ( in , line ) )
		{
			cout<< line << '\n';
		}
		in.close () ;  	
	}
}

void Line:: save(ofstream& out){

	out.open("line.txt") ;  
	out<<"StartPoint:{"<<startPoint.getX()<<", "<<startPoint.getY()<<"},";
	out<<"EndPoint:{"<<endPoint.getX()<<", "<<endPoint.getY()<<"},";
	out<<"Thickness:"<<this->thickness;
	out<<",Color:"<<this->color<<"\n";
	out.close () ;   
}

Line::~Line()
{
}
