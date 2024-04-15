#include <iostream>
#include <string>
#include "Car.h"
#include "Boat.h"
#include "Bike.h"

using namespace std;

int main(){
    Vehicle *v1 = new Car(100, 2000, "Skoda");
    Vehicle *v2 = new Boat(200, 50000, "Titanic");
    Vehicle *v3 = new Bike(30, 10, "BMX");

    cout << endl;

    v1->info();
    v1->move();

    cout << endl;

    v2->info();
    v2->move();

    cout << endl;

    v3->info();
    v3->move();

    return 0;
}