// setw manipulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "----------------------|--------------------------------|----------------------|\n";
    cout << "          code        |            Name                |         Mark         |\n";
    cout << "----------------------|--------------------------------|----------------------|\n";

    cout <<setw(22) << "c101" << "|" << setw(32) << "introduction to programming"
        << "|" << setw(22) << "95" << "|" << endl;

    cout << setw(22) << "c102" << "|" << setw(32) << "computer Hardware" << "|"
        << setw(22) << "88" << "|" << endl;

    cout << setw(22) << "c103456" << "|" << setw(32) << " Network" << "|"
        << setw(22) << "34" << "|" << endl;

    cout << setw(22) << "c101" << "|" << setw(32) << "introduction to programming"
        << "|" << setw(22) << "95" << "|" << endl;

    cout << setw(22) << "c102" << "|" << setw(32) << "computer Hardware" << "|"
        << setw(22) << "88" << "|" << endl;

    cout << setw(22) << "c103456" << "|" << setw(32) << " Network" << "|"
        << setw(22) << "34" << "|" << endl;

       
}
