#include <iostream>
#include "complex.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Complex::count=0;

int main(int argc, char** argv) {
	//In c++ bydefault objects created on stack	
	Complex c1(50,125);
	Complex c2(30,25);
	
	c1.display();
	c2.display();
	bool status=true;
	if( status)
	{
		Complex c3, c4, c5;
		//new and delete are operators used for dynamic memory management	
		Complex *pComplex=new Complex(56,98);
		delete pComplex;  //explicit Object removal from heap
	}

	Complex  c10= c1 + c2;
	c10.display();
	Complex  c11= c1 - c2;
	c11.display();
	
	int objectCount= Complex::getCount();
	cout <<" Number of instances of  Complex Class:"<<objectCount;
	return 0;
}
