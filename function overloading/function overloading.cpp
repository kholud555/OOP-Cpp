// function overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double Mysum(double a, double b)
{
    return (a + b);
}
int Mysum(int a, int b)
{
    return (a + b);
}
int Mysum(int a, int b, int c)
{
    return (a + b + c);
}
int Mysum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}
int main()
{
    cout << Mysum(10.1, 20.2) << endl;
    cout << Mysum(10, 20) << endl;
    cout << Mysum(10, 20,30) << endl;
    cout<< Mysum(10,20,30,4)
}

