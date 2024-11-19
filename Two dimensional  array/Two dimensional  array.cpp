// Two dimensional  array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int x[10][10];
	

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			x[i][j] = (i + 1) * (j + 1);

		}

	}

	for (int k = 0; k < 10; k++)
	{
		for (int f = 0; f < 10; f++)
		{
			printf("%0*d ", 2, x[k][f]);
		}
		cout << endl;
	}
	













}