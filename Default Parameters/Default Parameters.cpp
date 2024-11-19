

#include <iostream>
using namespace std;
int Mysum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}
int main()
{
    cout << Mysum(10, 20) << endl;
    cout << Mysum(10, 20,30) << endl;
    cout << Mysum(10, 20 , 30 ,40) << endl;

}

