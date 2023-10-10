#include "productmanager.h"
#include "global.h"

ProductManager::ProductManager()
{
}

ProductManager::~ProductManager()
{
}

bool ProductManager::Insert(Product p){
	bool status=false;
	products.push_back(p);
	status=true;
	return status;
}

bool ProductManager::Delete(int id){
	auto it = products.begin();
    // Iterate over all elements of vector
    while ( it != products.end())
    {
        // If element matches the element to be deleted
        // then delete it
        if ((*it).GetId() == id)
        {
            it = products.erase(it);
        }
        else
        {
            it++;
        }
    }
	return false;
}


bool ProductManager::Update(Product p){
	auto it = products.begin();
	    // Iterate over all elements of vector
	    while ( it != products.end())
	    {
	        // If element matches the element to be updated
	        // then update existing with new one
	        if ((*it).GetId() == p.GetId())
	        {
	           (*it).SetTitle(p.GetTitle());
	        }
	        else
	        {
	            it++;
	        }
	    }
	return false;
}

bool ProductManager::DeleteAll(){
	bool status=false;
	products.clear();
	status=true;
	return status;
}

Product ProductManager::GetById(int id){
	Product p;
	auto it = products.begin();
	// Iterate over all elements of vector
    while ( it != products.end())
    {
        // If element matches the element to be found
        // then retrieve existing object from collection
        if ((*it).GetId() == p.GetId())
        {
           p=(*it);
        }
        else
        {
            it++;
        }
    }
	return p;
}

vector<Product> ProductManager::GetAll(){
	return products;
}
