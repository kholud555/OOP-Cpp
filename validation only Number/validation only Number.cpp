// validation only Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Please , enter a number?\n";
    cin >> Number;

    while (cin.fail())
    {
        //user didn't input a number.
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invaild Number,Enter a valid one : " << endl;
        cin >> Number;
    }
    return Number;
}
int main()
{
    cout << "Your number is : " << ReadNumber() << endl;
}

