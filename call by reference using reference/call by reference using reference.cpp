// call by reference using reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void swap(int* n1, int* n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main()
{
	int a = 1, b = 2;

	cout << "Before swaping " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(&a, &b);
	cout << "After swaping " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

