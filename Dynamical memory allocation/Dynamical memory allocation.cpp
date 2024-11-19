

#include <iostream>
using namespace std;
int main()
{
    int* ptrx;
    float* ptry;

    ptrx = new int;
    ptry = new float;

    *ptrx = 50;
    *ptry = 49.9;

    cout << *ptrx << endl;
    cout << *ptry << endl;

    delete ptrx;
    delete ptry;


    
}
