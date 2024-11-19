// vectors access elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> Num{ 1,2,3,4,5 };
    
    cout << "Elements at index 0 : " << Num.at(0) << endl;
    cout << "Elements at index 1 : " << Num.at(1) << endl;
    cout << "Elements at index 4 : " << Num.at(4) << endl;

    cout << "Elements at index 2 : " << Num[2] << endl;
    cout << "Elements at index 1 : " << Num[1] << endl;
}
