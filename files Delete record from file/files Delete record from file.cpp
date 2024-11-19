// files Delete record from file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
void LoadDataFromfileToVector(string FileName, vector <string> & vFileContent)
{
    fstream Mythirdf;
    Mythirdf.open("Mythirdf.txt", ios::in);

    if (Mythirdf.is_open())
    {
        string line;
        while (getline(Mythirdf ,line))
        {
            vFileContent.push_back(line);
        }
        Mythirdf.close();
    }
}
void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream Mythirdf;
    Mythirdf.open("Mythirdf.txt", ios::out);

    if (Mythirdf.is_open())
    {
        for(string & line : vFileContent)
        {
            if (line != "")
            {
                Mythirdf<< line << endl;
            }
      
        }
        Mythirdf.close();
    }
}
void DeleteRecordFromFile(string FileName, string Record)
{
    vector <string> vFileContent;
    LoadDataFromfileToVector(FileName, vFileContent);

    for (string& line : vFileContent)
    {
        if (line == Record)
        {
            line = "";
        }
            
    }
    SaveVectorToFile(FileName, vFileContent);
}

void PrintFileContent(string FileName)
{
    fstream Mythirdf;

    Mythirdf.open(FileName, ios::in);

    if (Mythirdf.is_open())
    {
        string line;

        while (getline(Mythirdf, line))
        {
            cout << line << endl;
        }
        Mythirdf.close();
    }
}
int main()
{
    cout << "\nFile content before delete:\n";
    PrintFileContent("Mythirdf.txt");

    DeleteRecordFromFile("Mythirdf.txt", "zalo");

    cout << "\nFile content After delete:\n";
    PrintFileContent("Mythirdf.txt");
}

