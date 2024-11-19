
#include<vector>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20); 
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    vNumbers.push_back(60);

    cout << "vector size is : " << vNumbers.size() << endl << endl;

    vNumbers.pop_back();

    //vNumbers.clear();
   //
   //if(!vNumbers.empty())
   //    vNumbers.pop_back();
    if (!vNumbers.size())
        vNumbers.pop_back();

    cout << "vector size is : " << vNumbers.size() << endl << endl;


    cout << "Vector's elements :" << endl;

    for (int& Number : vNumbers)
    {
        cout << Number << endl;
    }

    cout << endl;
}
