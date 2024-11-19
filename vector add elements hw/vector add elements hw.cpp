// vector add elements hw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;

void AskForVectorElements(vector <int> & vNumbers)
{
	char AddMore = 'Y';

	while(AddMore == 'Y' || AddMore == 'y')
	{
		int Number;
		cout << "please , enter a number : \n";
		cin >> Number;
		vNumbers.push_back(Number);

		cout << " Do you want to add more elements :(y,n)\n";
		cin >> AddMore;

	}
}
void printNumbers(vector <int> & vNumbers)
{
	cout << " Vector elements = \n";

	for (int& Numbers : vNumbers)
	{
		cout <<Numbers << endl;
	}
	cout << endl;
}
int main()
{
	vector <int> vNumbers;
	AskForVectorElements(vNumbers);

	printNumbers(vNumbers);

}

