// file append mode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadFileFromFileToVEctor(string FileName, vector <string> & vFileContent)
{
	fstream Myfile;

	Myfile.open(FileName,ios::in);

	if (Myfile.is_open())
	{
		string line;

		while (getline(Myfile, line))
		{
			vFileContent.push_back(line);
		}

		Myfile.close();
	}
}
int main()
{
	vector <string> vFileContent;

	LoadFileFromFileToVEctor("Myfile.text", vFileContent);

	for (string & line : vFileContent)
	{
		cout << line << endl;
	}
	
	

}

