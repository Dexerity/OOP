#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main(){
    DynamicArray* arr = new DynamicArray();
    arr = arr->range(1, 10);

    cout<<"Array 1: "<<endl;
    for(int i = 0; i < arr->getCount(); i++){
        cout << arr->getAt(i) << " ";
    }
    cout << endl;

    arr->setAt(2, 10);

    for(int i = 0; i < arr->getCount(); i++){
        cout << arr->getAt(i) << " ";
    }
    cout << endl;

    arr->Add(20);

    for(int i = 0; i < arr->getCount(); i++){
        cout << arr->getAt(i) << " ";
    }
    cout << endl;

    DynamicArray* arr2 = new DynamicArray(5);
    arr2 = arr2->repeat(5, 10);

    cout<<"Array 2: "<<endl;
    for(int i = 0; i < arr2->getCount(); i++){
        cout << arr2->getAt(i) << " ";
    }
    cout << endl;

    int arrIn[] = {2,4,6,8,10};
    DynamicArray* arr3 = new DynamicArray(arrIn, 5);

    cout<<"Array 3: "<<endl;
    for(int i = 0; i < arr3->getCount(); i++){
        cout << arr3->getAt(i) << " ";
    }
    cout << endl;





    return 0;
}