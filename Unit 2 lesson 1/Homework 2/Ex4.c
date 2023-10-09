/* 
Ex4: Write C Program to check if the number is positive or negative

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    float number;

    printf("Enter a number \n");
    scanf("%f",&number);

    if(number>=0)
    {
        printf("The number is positive \n");
    }

    else
    {
        printf("The number is negative \n");
    }
    
}