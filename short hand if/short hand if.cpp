
#include <iostream>
using namespace std;

int main()
{
    int Number;
    cout << "Please,enter a Number?\n";
    cin >> Number;
   // (Number > 0) ? cout << "Positive" : cout << "Negative";
    (Number == 0)? cout<< "Zero":(Number>0)? cout << "Positive" : cout << "Negative";
}

