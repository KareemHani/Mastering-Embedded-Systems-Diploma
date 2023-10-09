/* 
Ex4: Write C Program to Multiply two Floating Point Numbers

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    float number1,number2;

    printf("Enter two numbers to print their Multiplication \n");

    /* Enter first number */
    scanf("%f",&number1);

    /* Enter second number */
    scanf("%f",&number2);

    /* Print the multiplication of the two numbers */
    printf("Multiplication of the two numbers= %f",number1*number2);

}