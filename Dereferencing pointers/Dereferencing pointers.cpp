// Dereferencing pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a = 10; 
	int* p = &a;

	cout << "pointer value =  " << p << endl;

	cout << "value of the adress that p is pointing to is " << *p << endl;

	*p = 30;
	cout << a << endl;
	cout << *p << endl;
	
	a = 40;

	cout << a << endl;
	cout << *p << endl;
}
