#include <iostream>
#include "dynamicarray.h"

using namespace std;
int main()
{
	 Dynarray da; // create an array object, size 10
	 da.add(1); // add values to the end
	 da.add(2);
	 da.add(3);
	 
	 da[3] = 4; // use LHV for assignment
	 
	 for (int i = 0; i < da.size(); i++) // get length of array using size()
	 cout << da[i] << endl; // print out using RHV
	 da[12] = 5; // assign element past end of array
	 
	 for (int j = 0; j < da.size(); j++) // size is now 22
	 cout << da[j] << endl; // print out all elements again in
	 return 0; // bigger array 
}

