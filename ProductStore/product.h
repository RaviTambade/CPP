#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product
{
	public:
		int id;
		string title;		
	public:
		Product();
		Product(int id, string title);
		int GetId();
		string GetTitle();
	    void SetTitle(string title);
		~Product();
	protected:
};

#endif
