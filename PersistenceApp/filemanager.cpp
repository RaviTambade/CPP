#include "filemanager.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

FileManager::FileManager()
{

}

void FileManager::readSimpleTextFile(){
	// Reading from a file
	string line ;
	ifstream personal_filein ; // here the personal_filein is an input stream
	personal_filein.open ("Demo.txt") ; // connecting personal_filein to file Input File
	if ( personal_filein.is_open () )
	{	
		while ( getline ( personal_filein , line ) )
		{
			cout<< line << '\n';
		}
		personal_filein.close () ;   // closing the output file stream		
	}
}

void FileManager::writeSimpleTextFile(){
	// Writing to a file
	ofstream personal_file ; // outs is an output stream of iostream class
	personal_file.open("Demo.txt") ; // connect outs to file outFile
	personal_file<< "HEY! Welcome to C ++ File handling.\n";
	personal_file<< "Start learning file handling.\n";
	personal_file.close () ;    // closing the output file stream
}
		 
