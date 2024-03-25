#include "DynamicArray.h"
#include <iostream>

using namespace std;

static int defaultSize = 10;

DynamicArray::DynamicArray()
{
    this->size = defaultSize;
    this->count = 0;
    this->arr = new int[defaultSize];
}

DynamicArray::DynamicArray(int n)
{
    this->size = n;
    this->count = 0;
    this->arr = new int[n];
}

DynamicArray::DynamicArray(int* arr, int length)
{
    this->size = length * 2;
    this->count = length;
    this->arr = new int[length * 2];

    for (int i = 0; i < length; i++)
    {
        this->arr[i] = arr[i];
    }
}

int DynamicArray::getAt(int index)
{
    if (index < 0 || index >= getCount())
    {
        cout<<"Out of bounds"<<endl;
    }

    return arr[index];
}

void DynamicArray::setAt(int index, int value)
{
    if (index < 0 || index >= getSize())
    {
        cout<<"Out of bounds"<<endl;
    }

    arr[index] = value;

    if (index >= getCount())
    {
        setCount(index + 1);
    }
}

int DynamicArray::getCount()
{
    return this->count;
}

int DynamicArray::getSize()
{
    return this->size;
}

void DynamicArray::setCount(int value)
{
    this->count = value;
}

void DynamicArray::setSize(int value)
{
    this->size = value;
}

DynamicArray* DynamicArray::repeat(int n, int initValue)
{
    DynamicArray* newArray = new DynamicArray(n);

    for (int i = 0; i < n; i++)
    {
        newArray->setAt(i, initValue);
    }

    newArray->setCount(n);

    return newArray;
}

DynamicArray* DynamicArray::range(int start, int end)
{
    if(start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }

    DynamicArray* newArray = new DynamicArray(end - start + 1);

    for (int i = start; i <= end; i++)
    {
        newArray->setAt(i - start, i);
    }

    newArray->setCount(end - start + 1);
    return newArray;
}

void DynamicArray::Add(int value)
{
    if (getCount() >= getSize())
    {
        int* newArr = new int[getSize() * 2];

        for (int i = 0; i < getSize(); i++)
        {
            newArr[i] = arr[i];
        }

        delete this->arr;
        this->arr = newArr;
        setSize(getSize() * 2);
    }

    arr[count++] = value;
}

DynamicArray::~DynamicArray()
{
    delete[] arr;
}