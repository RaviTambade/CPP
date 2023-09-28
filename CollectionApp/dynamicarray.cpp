#include "dynamicarray.h"
#include <iostream>

using namespace std;

Dynarray::Dynarray() {
	 pa = new int[10];
	 for (int i = 0; i < 10; i++)
	 pa[i] = 0;
	 length = 10;
	 nextIndex = 0;
} 

int& Dynarray::operator[](int index) {
	
	 int *pnewa; // pointer for new array
	 if (index >= length) { // is element in the array?
		 pnewa = new int[index + 10]; // allocate a bigger array
		 
		 for (int i = 0; i < nextIndex; i++) // copy old values
		 pnewa[i] = pa[i];
		 
		 for (int j = nextIndex; j < index + 10; j++) // initialize remainder
		 pnewa[j] = 0;
		 length = index + 10; // set length to bigger size
		 delete [] pa; // delete the old array
		 pa = pnewa; // reassign the new array
	 }
	 if (index > nextIndex) // set nextIndex past index
	 	nextIndex = index + 1;
	 return *(pa + index); // a reference to the element
} 


void Dynarray::add(int val) {
	 int *pnewa;
	 if (nextIndex == length) {
		 length = length + 10;
		 pnewa = new int[length];
		 for (int i = 0; i < nextIndex; i++)
		 pnewa[i] = pa[i];
		 for (int j = nextIndex; j < length; j++)
		 pnewa[j] = 0;
		 delete [] pa;
		 pa = pnewa;
	 }
	 pa[nextIndex++] = val;
} 


int Dynarray::size() {
	 return length;
} 


Dynarray::~Dynarray() {
	 delete [] pa;
} 

