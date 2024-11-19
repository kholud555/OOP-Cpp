//Input: arr[] = { {1, 2}, {1, 2} }
//and N = 2
//Output : 1 1 2 2

#include <iostream>
using namespace std;

int main()
{
    int x[2][2] = { {1,2},
                  {1,2} };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x[i][j] = (i+1), (j+1);
            cout << x[i][j] << " ";

            
        }
    }
}

