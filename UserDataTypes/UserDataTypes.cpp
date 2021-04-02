// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Sandwich
{
public:
    void Display() { std::cout << "Price: $" << price << std::endl; }
public:
    char name[32];
    float price;
    bool isHot;
};


int main()
{
    std::cout << "Hello World!\n";

    Sandwich turkey;
    turkey.price = 4.99f;
    turkey.isHot = true;
    turkey.Display();


    int i = 5;
    char c = 34;
    i = c;

    std::cout << sizeof(Sandwich);

    float f = 23.4f; //4
    double d = 34.5; //8

    f = static_cast<float>(d);

    d = f;

    //implicit
    //char c = 5;
    //int i = c;
    ////explicit
    //double d = 24.5f;
    //float f = static_cast <float>(d);
}

