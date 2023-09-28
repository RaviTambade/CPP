#include <iostream>
#include <fstream>
#include <memory>

#include "point.h"
#include "line.h"

using namespace std;

int dynamicArray()
{
  size_t n=1;
  while (n != 0)
  {
    std::cout << "enter the number of elements in the array or 0 to exit: "; std::cin >> n;
    int *ar=new int[n];
    if (n > 0)
    {
      std::cout << "enter the array elements\n";
      for (int i = 0; i < n; i++)
      {
        std::cin >> ar[i];
      }

      std::cout << "The numbers in reverse are:\n";
      for (int i = n - 1; i >= 0; i--)
      {
        std::cout << ar[i] << " ";
      }
      std::cout << std::endl;
    
    }
    // here it is not essential to use the delete operator.
  }
}
	
	
int main(int argc, char** argv) {
	
	Point startPoint2(12,10);
	Point endPoint2(56,155);
 
	Line l1(startPoint2, endPoint2, 1, "red");
	ofstream line_file ;  
	ifstream line_filein ;
	
	cout<<"Serialization  DeSerialization \n";
	l1.save(line_file);
	l1.load(line_filein); 
	
	Line l2(startPoint2, endPoint2, 3, "green");
	Line l3(startPoint2, endPoint2, 4, "blue");
	Line lines[3]={l1,l2,l3};
	for (int i = 0; i < 3; i++){
		lines[i].display();
	}
	
	cout<<"\nCreating Lines dynamically";
	Line *pLines = new Line[3];
 
	for (int i = 0; i < 3; i++){
			Line *pLine=new Line(startPoint2, endPoint2, 5, "green");
			//pLines[i]=pLine;
	}
	
	cout<<"\nPointers taverse";
	for (int i = 0; i < 3; i++){
		pLines[i].display();
	}
	
	
	
	
	dynamicArray();

	
	
	
	return 0;
}
