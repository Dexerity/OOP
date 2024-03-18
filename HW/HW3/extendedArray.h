#pragma once

class ExtendedArray
{
private:
    int* array;
    int count;
    int length;
public:
    ExtendedArray(int length);
    int getCount();
    int getAt(int index);
    void arrInsert(int x);
    ~ExtendedArray();
    ExtendedArray* merge(ExtendedArray* array);
    ExtendedArray* intersect(ExtendedArray* array);
};
