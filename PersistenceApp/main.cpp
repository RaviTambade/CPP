#include <fstream>
#include <iostream>

using namespace std ;

int main () {
	char data[100] ;
	// opening a file in the write mode.
	
	ofstream outfile ;
	outfile.open ( " Demo.txt " ) ;
	cout<< " Writing to the file " <<endl ;
	cout<< " Enter your name : " ;
	cin.getline ( data , 100 ) ;
	
	// writing the input data into the file.
	outfile<< data <<endl ;
	cout<< " Enter your age: " ;
	cin>>data ;
	cin.ignore () ;
	
	//  writing the input data into the file.
	outfile<< data <<endl ;
	// closing the opened file.
	outfile.close () ;
	
	// opening a file in read mode.
	ifstream infile ;
	infile.open ("Demo.txt" ) ;
	cout<< " Reading from the file " <<endl ;
	infile>>data ;
	
	// writing the data
	cout<< data <<endl ;
	// reading the data from the file
	
	infile>>data ;
	cout<< data <<endl ;

	// closing the opened file.
	infile.close () ;
	return 0 ;
}
