// vectors change elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> Num{ 1,2,3,4,5 };

    for (const int& i : Num)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int& i : Num)
    {
        i = 20;
        cout << i << " ";
    }


    Num[0] = 100;
    Num.at(2) = 90;
    Num.at(3) = 80;
    cout << endl;
    for (const int& i : Num)
    {
        cout << i << " ";
    }
}

