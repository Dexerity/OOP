#include <iostream>
#include "extendedArray.h"

using namespace std;

int main(){

    int array1[8] = {0,1,3,4,6,7,8,9};
    int array2[6] = {7,6,5,4,3,0};

    ExtendedArray* arr1 = new ExtendedArray(8);
    ExtendedArray* arr2 = new ExtendedArray(6);

    for (int i = 0; i < 8; i++)
    {
        arr1->arrInsert(array1[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        arr2->arrInsert(array2[i]);
    }

    ExtendedArray* arr3 = arr1->merge(arr2);

    cout<<"Merge:"<<endl;

    for (int i = 0; i < arr3->getCount(); i++)
    {
        cout<<arr3->getAt(i)<<endl;
    }
    
    ExtendedArray* arr4 = arr1->intersect(arr2);

    cout<<"Intersect:"<<endl;

    for (int i = 0; i < arr4->getCount(); i++)
    {
        cout<<arr4->getAt(i)<<endl;
    }

    return 0;
}