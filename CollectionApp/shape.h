#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

//abstract Class
class Shape
{
	public:
		Shape();
		Shape(int t,string c);
		~Shape();
		virtual void display()=0;   
		//Pure virutal function
		//abstract method
	protected:
		int thickness;
		string color;	
};

#endif
