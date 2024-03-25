#pragma once

class DynamicArray
{
public:
    DynamicArray();
    DynamicArray(int n);
    DynamicArray(int* arr, int length);
    int getAt(int index);
    void setAt(int index, int value);
    int getCount();
    void setCount(int value);
    int getSize();
    void setSize(int value);
    ~DynamicArray();
    static DynamicArray* repeat(int n, int initValue);
    static DynamicArray* range(int start, int end);
    void Add(int value);
private:
    int* arr;
    int size;
    int count;
};