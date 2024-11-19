// some cctype   functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	char x, y;

	x = toupper('a');
	cout << toupper('a') << endl;
	cout << x << endl;

	y = tolower('B');
	cout << y << endl;

	cout << "islowr(A) :" << islower('A') << endl;
	cout << "isupper(B):" << isupper('B') << endl;

	cout << "isdigit (9) :" << isdigit('9') << endl;
	cout << "isdigit (n) :" << isdigit('n') << endl;

	cout << "Ispuctuation (*) :" << ispunct('*') << endl;
	cout << "Is puctuation (4) : " << ispunct('4') << endl;

}

