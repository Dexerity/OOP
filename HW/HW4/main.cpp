#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main(){
    DynamicArray<int> arr = DynamicArray<int>(5);
    arr.Add(1);
    arr.Add(2);

    cout << arr.getAt(0) << endl;

    cout << "----------------" << endl;
    
    //range use
    DynamicArray<int> arr2 = DynamicArray<int>::repeat(5, 5);

    for (int i = 0; i < arr2.getCount(); i++)
    {
        cout << arr2.getAt(i) << endl;
    }

    cout << "----------------" << endl;

    DynamicArray<int> arr3 = DynamicArray<int>::range(1, 5);

    for (int i = 0; i < arr3.getCount(); i++)
    {
        cout << arr3.getAt(i) << endl;
    }


    return 0;
}