#pragma once
#include<iostream>
using namespace std;

namespace ArrayFunction
{
	int Random_number(int from, int to)
	{
		int Rand_num = rand() % (to - from + 1) + from;
		return Rand_num;
	}
	void fill_array_with_random_numbers(int arr1[100], int& arrlength)
	{
		cout << "\n Enter number of elements :" << endl;
		cin >> arrlength;

		for (int i = 0; i < arrlength; i++)
			arr1[i] = Random_number(1, 100);

	}
	void print_array_with_random_numbers(int arr[100], int arrlength)
	{
		for (int i = 0; i < arrlength; i++)
		{
			cout << arr[i] << " ";


		}
		cout << endl;

	}
	short find_number_position_in_array(int search_num, int arr[100], int arrlength)
	{
		/*This function will search for a number in array and return
		index , or return -1 if it does not exist*/
		for (int i = 0; i < arrlength; i++)
		{
			if (arr[i] == search_num)
			{
				return i;// and return the index0
			}
		}
		// if you reached here, this mean the number id not found 
		return -1;
	}
	void print_array(int arr[100], int arrlength)
	{
		for (int i = 0; i < arrlength; i++)
		{
			cout << arr[i] << " ";

		}
		cout << "\n";
	}


}