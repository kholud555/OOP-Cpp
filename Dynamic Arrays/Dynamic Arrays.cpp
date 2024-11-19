// Dynamic Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int Num; 

    cout << "Please, enter the total number of students : \n";
    cin >> Num;

    float* ptr;
    ptr = new float[Num];

    cout << " Please enter  students degree :\n";
    for (int i = 0; i < Num; i++)
    {
        cout << "Student" << i + 1 << ":";
        cin >> *(ptr + i);
    }
    cout << endl;

    cout << "Displaying degrees of students : \n";
    for (int i = 0; i < Num; i++)
    {
        cout << "student" << i + 1 << ":" << *(ptr + i) << endl;
    }

    delete[] ptr;
}

