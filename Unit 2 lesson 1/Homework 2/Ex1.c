/* 
Ex1: Write C Program to check whether a number is even or odd

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    int number;

    printf("please enter a number \n");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("The entered number is even \n");

    }

    else
    {
        printf("The entered number is odd \n");
    }

}