// Read mode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void PrintFileContent(string FileName)
{
    fstream Myfile;
    Myfile.open(FileName, ios::in);//Read Mode.

    if(Myfile.is_open())
    {

        string line;

        while (getline(Myfile, line))
        {
            cout << line << endl;
        }
    }
}

int main()
{
    PrintFileContent("Myfile.text");
}

