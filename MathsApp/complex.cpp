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
 
  //Definition of overloaded binary operator * friend function, which multiples two objects of A and returns an object of A
Complex  Complex::operator +(Complex c1, Complex c2)
{
	Complex temp;
	temp.real=c1.real- c2.real;
 	temp.imag=c2.imag- c2.imag;
  	return temp;
}	
Complex::~Complex()
{
	Complex::count--;
}
