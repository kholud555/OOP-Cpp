

#include <iostream>
using namespace std;

int main()
{
	int M = 3;
	int N = 3;
	int x = 1;
	for (int i = 1; i <= M; i++)
	{
		x*= N;
	}
	cout << x << endl;
}

