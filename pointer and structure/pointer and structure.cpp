

#include <iostream>
using namespace std;
struct stEmployee
{
	string Name;
	float salary;
};
int main()
{
	stEmployee Employee1, * p;

	Employee1.Name = "kholud Ahmed";
	Employee1.salary = 5000;
	p = & Employee1;
	cout << "using Pointer\n";
	cout << p->Name << endl;
	cout << &(p->Name) << endl;
	cout << p->salary << endl;
	cout << &(p->salary) << endl;
}

