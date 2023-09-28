#include "myclass.h"

template <class T>
T MyClass<T>::getMaxval()
{
    return (a > b) ? a : b;
}

template <class T>
 MyClass<T>::MyClass(T first, T second)
    {
        a = first;
        b = second;
    }


