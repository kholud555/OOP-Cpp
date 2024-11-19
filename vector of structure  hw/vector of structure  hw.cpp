// vector of structure  hw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include<string>
using namespace std;
struct stEmployee
{
    string FirstName;
    string LastName;
    float salary;
};
void ReadVectorEmployee(vector<stEmployee> & vEmployees)
{
    char AddMore = 'Y';
    stEmployee REmplyee;
    while (AddMore == 'y' || AddMore == 'Y')
    {
        cout << "what is  Employee first Name?\n ";
        cin >> REmplyee.FirstName;
        cout << "what is  Employee last Name?\n ";
        cin >> REmplyee.LastName;
       /* getline(cin, REmplyee.LastName);
        cin.ignore(1, '\n');*/
        cout << "what is  Employee salary?\n ";
        cin >> REmplyee.salary;
        vEmployees.push_back(REmplyee);

        cout << "Do you want to add more Employees ?'Y/N'\n";
        cin >> AddMore;
    }
}
void PrintVectorEmployee(vector<stEmployee>& vEmployees)
{
    cout << "Employees Info :\n" << endl;
    for (stEmployee &Employee : vEmployees)
    {
        cout << "First Name : " << Employee.FirstName << endl;
        cout << "last  Name : " << Employee.LastName << endl;
        cout << "salary     : " << Employee.salary << endl;

        cout << endl;

    }
}
int main()
{
    vector<stEmployee> vEmployees;
    ReadVectorEmployee(vEmployees);
    PrintVectorEmployee(vEmployees);
}

