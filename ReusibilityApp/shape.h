#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;
class Shape
{
	public:
		Shape();
		Shape(int t,string c);
		~Shape();
		virtual void display()=0;
	protected:
		int thickness;
		string color;
		
};

#endif
