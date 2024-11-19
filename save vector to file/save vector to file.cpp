// save vector to file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
	fstream Mysecondfile;
	Mysecondfile.open(FileName, ios::out);

	if (Mysecondfile.is_open())
	{
	
		for (string& line : vFileContent)
		{
			if (line != "")
			{
				Mysecondfile << line << endl;
			}
		}
		Mysecondfile.close();
	}

}
int main()
{
	vector <string > vFileContent{ "Kholud" ,"Loves" , "Zalobay" };
	SaveVectorToFile("Mysecondfile.txt", vFileContent);

}
