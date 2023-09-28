#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class MyClass
{
    T a, b;
public:
    MyClass(T first, T second);
    T getMaxval();
};
#endif
