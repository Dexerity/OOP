#include "extendedArray.h"
#include <iostream>

using namespace std;

ExtendedArray::ExtendedArray(int length)
{
    this->length = length;
    this->count = 0;
    this->array = new int [length];

    for (int i = 0; i < length; i++)
    {
        this->array[i] = INT16_MIN;
    }
}

int ExtendedArray::getCount()
{
    return this->count;
}

int ExtendedArray::getAt(int index)
{
    if(this->array[index] == INT16_MIN)
        cout<<"index is empty at "<<index<<endl;

    return this->array[index];
}

ExtendedArray::~ExtendedArray()
{
    delete this->array;
}

void ExtendedArray::arrInsert(int x)
{
    this->array[this->count] = x;
    this->count++;
}

ExtendedArray* ExtendedArray::merge(ExtendedArray* array)
{
    ExtendedArray* arr = new ExtendedArray(this->count + array->count);
    
    for (int i = 0; i < this->count; i++)
    {
        arr->array[i] = this->array[i];
        arr->count++;
    }
    
    for (int i = 0; i < array->count; i++)
    {
        arr->array[i + this->count] = array->array[i];
        arr->count++;
    }

    return arr;
}

ExtendedArray* ExtendedArray::intersect(ExtendedArray* array)
{
    ExtendedArray* arr;
    if(this->count < array->count)
        arr = new ExtendedArray(this->count);
    else    
        arr = new ExtendedArray(array->count);

    for (int i = 0; i < this->getCount(); i++)
    {
        for (int j = 0; j < array->getCount(); j++)
        {
            if(this->getAt(i) == array->getAt(j))
            {
                arr->arrInsert(this->getAt(i));
            }
        }
    }
    
    return arr;
}