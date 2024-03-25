#pragma once
#include <string>

using namespace std;

class Card{
public:
    Card(string number,  string symbol);
    string getSymbol();
    string getNumber();
private:
    string symbol;
    string number;
};