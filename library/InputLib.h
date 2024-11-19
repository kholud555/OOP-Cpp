#pragma once

#include<iostream>
using namespace std;

namespace InputLib
{
	int ReadNumber()
	{
		int Number;
		cout << "Please,enter the number?\n";
		cin >> Number;
		return Number;
	}
	int Read_positive_Number(string Message)
	{
		int Number = 0;
		do
		{
			cout << Message << endl;
			cin >> Number;
		} while (Number <= 0);
		return Number;

	}
	float Read_float_number()
	{
		float Number;
		cout << "please , enter a number :\n";
		cin >> Number;
		return Number;
	}
	float Get_fraction_part(float Number)
	{
		return Number - int(Number);
	}
	int My_Round(float Number)
	{
		int intpart;
		intpart = int(Number);
		float fraction_part = Get_fraction_part(Number);

		if (abs(fraction_part) >= .5)
		{
			if (Number > 0)
				return ++intpart;
			else
				return --intpart;


		}

	}


}

