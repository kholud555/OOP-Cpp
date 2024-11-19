
// vetor of structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;

struct stEmployee
{
    string firstName;
    string lastName;
    float salary;
};

int main()
{
    vector <stEmployee> vEmployees;

    stEmployee tempEmployee;

    tempEmployee.firstName = "Mohammed";
    tempEmployee.lastName = "Abu-Hadhoud";
    tempEmployee.salary = 5000;
    vEmployees.push_back(tempEmployee);

    tempEmployee.firstName = "Aya";
    tempEmployee.lastName = "Omran";
    tempEmployee.salary = 3000;
    vEmployees.push_back(tempEmployee);

    tempEmployee.firstName = "Ali";
    tempEmployee.lastName = "Maher";
    tempEmployee.salary = 400;
    vEmployees.push_back(tempEmployee);

    cout << "vector Employee = \n\n";

    for (stEmployee  &Employee : vEmployees)
    {
        cout << "First Name :" << Employee.firstName << endl;
        cout << "Last Name  :" << Employee.lastName << endl;
        cout << "salary     :" << Employee.salary << endl;

        cout << endl;
    }

    cout << endl;
}
