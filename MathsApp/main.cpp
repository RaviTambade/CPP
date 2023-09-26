#include <iostream>
#include "complex.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Complex::count=0;
int main(int argc, char** argv) {
	
	
	//In c++ bydefault objects created on stack
	
	Complex c1(56,34);
	Complex c2(23,56);
	c1.display();
	c2.display();
	bool status=true;
	if( status)
	{
		Complex c3, c4, c5;
		Complex *pComplex=new Complex(56,98);
		delete pComplex;
	}


	
	int objectCount= Complex::getCount();
	cout <<" Number of instances of  Complex Class:"<<objectCount;
	return 0;
}
