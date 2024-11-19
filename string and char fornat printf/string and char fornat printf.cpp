// string and char fornat printf.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char Name[] = "Mohamed Abu-Hadhoud";
    char schoolName[] = "Programming advices";

    printf("Dear %s ,How are you ? \n", Name);
    printf("welcom to %s school \n", schoolName);

    char c = 's';
    
    printf("setting the width of c : %*c \n", 1, c);
    printf("setting the width of c : %*c\n", 2, c);
    printf("setting the width of c : %*c \n", 3, c);
    printf("setting the width of c : %*c \n", 4, c);

   
}

