/* 
Ex7: Write C Program to calculate a factorial of a number

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    int number,factorial=1;

    printf("Please enter a number \n");
    scanf("%d",&number);

    if(number>0)
    {
        for(int i=1;i<=number;i++)
        {
            factorial*=i;
        }
        printf("Factorial=%d \n",factorial);
    }

    else
    {
        printf("Error ! \n");
    }
}