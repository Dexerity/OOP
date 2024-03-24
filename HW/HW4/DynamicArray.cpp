#include "DynamicArray.h"
#include <iostream>

using namespace std;

DynamicArray::DynamicArray()
{
    size = defaultSize;
    count = 0;
    arr = new int[defaultSize];
}

DynamicArray::DynamicArray(int n)
{
    this->size = n;
    count = 0;
    arr = new int[n];
}

DynamicArray::DynamicArray(int* arr, int length)
{
    this->size = length * 2;
    count = length;
    this->arr = new int[length * 2];

    for (int i = 0; i < length; i++)
    {
        this->arr[i] = arr[i];
    }
}

int DynamicArray::getAt(int index)
{
    if (index < 0 || index >= count)
    {
        cout<<"Out of bounds"<<endl;
    }

    return arr[index];
}

void DynamicArray::setAt(int index, int value)
{
    if (index < 0 || index >= size)
    {
        cout<<"Out of bounds"<<endl;
    }

    arr[index] = value;

    if (index >= count)
    {
        count = index + 1;
    }
}

int DynamicArray::getCount()
{
    return this->count;
}

DynamicArray* DynamicArray::repeat(int n, int initValue)
{
    DynamicArray* newArray = new DynamicArray(n);

    for (int i = 0; i < n; i++)
    {
        newArray->setAt(i, initValue);
    }

    newArray->count = n;

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

    newArray->count = end - start + 1;
    return newArray;
}

void DynamicArray::Add(int value)
{
    if (count >= size)
    {
        int* newArr = new int[size * 2];

        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        size *= 2;
    }

    arr[count] = value;
    count++;
}

DynamicArray::~DynamicArray()
{
    delete[] arr;
}