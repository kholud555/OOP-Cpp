// integer format print f.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int page = 100, Totalpages = 10;

    //print string and integer variable.
    printf("The page number is = %d \n",page);
    printf("The page number is = %d of %d \n", page, Totalpages);
    
    //width specigication.
    printf("The page number is = %0*d \n", 2, page);
    printf("The page number is = %0*d \n", 3 , page );
    printf("The page number is = %0*d \n", 4, page);
    printf("The page number is = %0*d \n", 5, page);

    int Number1 = 20, Number2 = 30;
    printf("The result of %d + %d = %d \n", Number1, Number2, Number1 + Number2); 

}

