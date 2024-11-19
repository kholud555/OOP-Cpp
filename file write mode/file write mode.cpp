// file write mode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream Myfile;
     
    Myfile.open("Myfile.text", ios::out);//write mode.

    if (Myfile.is_open())
    {
        Myfile << "Hi,This is the first line \n";
        Myfile << "Hi,This is the second line \n";
        Myfile << "Hi, this is the third line \n";

        Myfile.close();
    }
}
