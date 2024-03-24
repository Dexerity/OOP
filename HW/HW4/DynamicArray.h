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
    ~DynamicArray();
    static DynamicArray* repeat(int n, int initValue);
    static DynamicArray* range(int start, int end);
    void Add(int value);
private:
    static const int defaultSize = 10;
    int* arr;
    int size;
    int count;
};