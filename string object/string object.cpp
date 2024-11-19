

#include <iostream>
using namespace std;
int main()
{
    string str1 = "My Name is Kholud Ahmed Mahmoud Mohamed , I love Programming.";

    str1.append("and zalo.");
    cout << str1 << endl;

   
    cout << str1.at(11) << endl;

    cout << str1.at(65) << endl;

    cout << str1.length() << endl;

    str1.push_back('z');
    cout << str1 << endl;

    str1.pop_back();
    cout << str1 << endl;
     
    str1.insert(17, " zalo");
    cout << str1 << endl;

    cout << str1.length() << "*" << endl;

    cout << str1.substr(70, 4) << endl;

    cout << str1.substr(11, 6) << endl;

    cout << str1.find("zalo") << endl;

    cout << str1.find("cat") << endl;

    if (str1.find("cat") == str1.npos)
    {
        cout << "cat is not found ." << endl;
    }
    str1.clear();
        cout << str1 << endl;
}
