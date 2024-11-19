// pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a = 3;
	int b = 5;
	int h = 33;
	string MyName = "Kholud";
	cout << &a << endl;
	int* p = &a;
	p = &h;
	//string *p = &MyName;

	cout << p << endl;

} 
