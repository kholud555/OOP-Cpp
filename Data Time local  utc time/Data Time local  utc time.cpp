// Data Time local  utc time.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma warning (disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	time_t t = time(0); // get time now by seconds

	char* dt = ctime(&t); // convert seconds to date , minutes , hours

	cout << "local data and time is : " << dt << "\n";

	tm* gmtm = gmtime(&t); //convert now to tm struct for UTC date time 
	dt = asctime(gmtm);
	cout << "UTC date and time is : " << dt;
}

