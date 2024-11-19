
// Write a C++ program to find the sum of all elements in an array using recursion.

#include <iostream>
using namespace std;
int AskHowManyElemests()
{
    int ElementsNumber = 0;
    cout << "How Many elements in an array do you want :";
    cin >> ElementsNumber;
    return ElementsNumber;
}
void FillArrayElements(int n ,int arr[100])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Please, enter element[" << i + 1 << "]" << endl;
        cin >> arr[i];
    }
}

int SumOfArrayElements(int n, int arr[100])
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return arr[n - 1] + SumOfArrayElements(n-1, arr);
    }
}

int main()
{
   

    int n = AskHowManyElemests();

    int arr[100];

    FillArrayElements(n, arr);

   cout<< "The sum of array element is = " << SumOfArrayElements(n, arr);



}

 