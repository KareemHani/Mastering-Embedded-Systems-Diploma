/* 
Ex3: Write C Program to Add Two Integers

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    int number1,number2;

    printf("Enter two numbers to print their sum \n");

    /* Enter first number */
    scanf("%d",&number1);

    /* Enter second number */
    scanf("%d",&number2);

    /* Print the sum of the two numbers */
    printf("Sum of the two numbers= %d",number1+number2);

}