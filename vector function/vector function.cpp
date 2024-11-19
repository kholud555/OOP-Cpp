// vector function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int>vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    vNumbers.push_back(60);

    cout << "first element : " << vNumbers.front() << endl;
    cout << "last element :  " << vNumbers.back() << endl;

    cout << "capacity : " << vNumbers.capacity() << endl;

    cout << " empty : " << vNumbers.empty() << endl;
     
    int koko = 100;
    cout << &koko << endl;

    for (int& Number : vNumbers)
    {
        cout << &Number << endl;
    }
}
