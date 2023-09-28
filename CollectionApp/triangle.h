#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"
#include "point.h"
#include <string>
using namespace std;
class Triangle:Shape
{
	private:
			int base, height;
	public:
		Triangle();
		Triangle(int base, int height, int t,string c);
		~Triangle();
		float calculateArea();
        void display();
};
#endif
