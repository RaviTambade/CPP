#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include<vector>

#include "product.h"
//using namespance std;
class ProductManager
{
	public:
		ProductManager();
		~ProductManager();
		bool Insert(Product p);
		bool Update(Product p);
		bool Delete(int id);
		bool DeleteAll();
		Product GetById(int id);
		vector<Product> GetAll();
	protected:
};

#endif
