// vector iterators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include<vector>
using namespace std;

int main()
{
    vector <int> Num = { 1, 2, 3, 4,5 };

    cout << *Num.begin()+2 << endl;
    cout << Num.front() << endl;
    cout << Num.back()  << endl;
    cout << Num.back()-1 << endl;

    vector <int >::iterator iter;

    for (iter = Num.begin(); iter != Num.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    Num.erase(Num.begin(),Num.begin()+3);//deleted range from index 0 to 3
    Num.pop_back();// deleted last index "5"

    for (const int& i : Num)
    {
        cout << i << " ";// 4 
    }
    cout << "\n";
    Num.push_back(6);

    for (const int& i : Num)
    {
        cout << i << " ";// 4,6 
    }
    cout << "\n";
    vector <int> Nums = { 10, 20, 30, 40,50 };
    vector < int >::iterator first = Nums.begin();

    advance(first, 4);//40
    cout << *first << endl;
    advance(first, -2);//20
    cout << *first << endl;

}
