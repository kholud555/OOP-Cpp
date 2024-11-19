// vectors declaration and initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<vector>
#include <iostream>
using namespace std;

int main()
{
    //std::vectors <data type> vector_Name.
    vector <int> vNumbers = { 10,20,30,40,50 };

    cout << "Numbers of vector = ";

    //ranged loop
    for (int & Number : vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;
}

