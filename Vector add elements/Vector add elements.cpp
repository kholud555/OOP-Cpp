// Vector add elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	cout << "Numbers vector = " << endl;

	for (int Numbers : vNumbers)
	{
		cout << Numbers << endl;
	}
	cout << endl;
}
