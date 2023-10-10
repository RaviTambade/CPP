#include "product.h"
 
Product::Product()
{
	this->id=34;
	this->title="Jasmine";
}

Product::Product(int id, string title){
	this->id=id;
	this->title=title;
}

Product::~Product()
{
}

int Product::GetId(){
    
    return this->id;
}

string Product::GetTitle(){  
       return this->title;
}

void Product::SetTitle(string title){
	this->title=title;
}
