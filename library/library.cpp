
#include <iostream>
# include "My library.h";
#include "InputLib.h";
#include "MathMylLib.h";
using namespace std;
int main()
{
	Mylib::Test();
	cout << Mylib::Sum2Numbers(100, 1234)<<endl;
	int Number = InputLib::ReadNumber();
	cout << Number << endl;
	cout << MathMyLib::My_sqrt(49) << endl;
}

