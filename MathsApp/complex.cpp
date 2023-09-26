#include "complex.h"
#include <iostream>
using namespace std;



Complex::Complex()
{
	this->real=0;
	this->imag=0;
	Complex::count++;
}

Complex::Complex(int r, int i)
{
	this->real=r;
	this->imag=i;
	Complex::count++;
}


void Complex::display(){
	cout<< this->real <<" +"<<this->imag<<"i \n";
}

int  Complex::getCount(){
	return count;
	
}



 Complex& Complex::operator+ (Complex &c2){
    Complex temp;
 	temp.real=this->real+ c2.real;
 	temp.imag=this->imag+ c2.imag;
  	return temp;
 }

 Complex& Complex::operator- (Complex &c2){
    Complex temp;
 	temp.real=this->real- c2.real;
 	temp.imag=this->imag- c2.imag;
  	return temp;
 }
		
Complex::~Complex()
{
	Complex::count--;
}
