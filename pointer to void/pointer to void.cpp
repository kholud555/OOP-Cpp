

#include <iostream>
using namespace std;
int main()
{
    void * ptr;
    int x = 50;
    float f1 = 10.5;
    string koko = "Khokha";
    ptr = &f1;
    cout << ptr << endl;
    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;
    cout << ptr << endl;
    cout << *(static_cast<int*>(ptr)) << endl;//value of x.

    ptr = &koko;
    cout << ptr << endl;
    cout << *(static_cast<string*>(ptr)) << endl;
}

