#include <iostream>
#include <fstream>
#include "point.h"
#include "line.h"

using namespace std;

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
	for (int i = 0; i < 5; i++){
		lines[i].display();
	}
	return 0;
}
