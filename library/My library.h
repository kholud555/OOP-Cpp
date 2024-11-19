#pragma once
#include <iostream>
using namespace std;

namespace Mylib
{
	void Test()
	{
		cout << " This is my fist function in my first library ." << endl;
	}
	int Sum2Numbers(int Number1, int Number2)
	{
		return Number1 + Number2;
	}
}