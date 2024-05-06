#pragma once
#include <iostream>

using namespace std;

template <typename T>
class DynamicArray
{
public:
    DynamicArray();
    DynamicArray(int n);
    DynamicArray(T* arr, int length);
    T getAt(int index);
    void setAt(int index, T value);
    int getCount();
    void setCount(int value);
    int getSize();
    void setSize(int value);
    ~DynamicArray();
    static DynamicArray<T> repeat(int n, T initValue);
    static DynamicArray<T> range(T start, T end);
    void Add(T value);
private:
    T* arr;
    int size;
    int count;
};

template <typename T>
DynamicArray<T>::DynamicArray()
{
    this->size = 10;
    this->count = 0;
    this->arr = new T[10];
}

template <typename T>
DynamicArray<T>::DynamicArray(int n)
{
    this->size = n;
    this->count = 0;
    this->arr = new T[n];
}

template <typename T>
DynamicArray<T>::DynamicArray(T* arr, int length)
{
    this->size = length * 2;
    this->count = length;
    this->arr = new T[length * 2];

    for (int i = 0; i < length; i++)
    {
        this->arr[i] = arr[i];
    }
}

template <typename T>
T DynamicArray<T>::getAt(int index)
{
    if (index < 0 || index >= getCount())
    {
        cout<<"Out of bounds"<<endl;
    }

    return arr[index];
}

template <typename T>
void DynamicArray<T>::setAt(int index, T value)
{
    if (index < 0 || index >= getSize())
    {
        cout << "Out of bounds" << endl;
    }

    arr[index] = value;

    if (index >= getCount())
    {
        setCount(index + 1);
    }
}

template <typename T>
int DynamicArray<T>::getCount()
{
    return this->count;
}

template <typename T>
int DynamicArray<T>::getSize()
{
    return this->size;
}

template <typename T>
void DynamicArray<T>::setCount(int value)
{
    this->count = value;
}

template <typename T>
void DynamicArray<T>::setSize(int value)
{
    this->size = value;
}

template <typename T>
DynamicArray<T> DynamicArray<T>::repeat(int n, T initValue)
{
    DynamicArray<T> result(n);
    for (int i = 0; i < n; i++)
    {
        result.arr[i] = initValue;
    }
    result.setCount(n);
    return result;
}

template <typename T>
DynamicArray<T> DynamicArray<T>::range(T start, T end)
{
    int n = end - start + 1;
    DynamicArray<T> result(n);
    for (int i = 0; i < n; i++)
    {
        result.arr[i] = start + i;
    }
    result.setCount(n);
    return result;
}

template <typename T>
void DynamicArray<T>::Add(T value)
{
    if (getCount() >= getSize())
    {
        T* newArr = new T[getSize() * 2];

        for (int i = 0; i < getSize(); i++)
        {
            newArr[i] = arr[i];
        }

        delete[] this->arr;
        this->arr = newArr;
        setSize(getSize() * 2);
    }

    arr[count++] = value;
}

template <typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] arr;
}