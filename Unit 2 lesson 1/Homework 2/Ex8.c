/*
Ex8: Write C Program for a simple calculator

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    float number1,number2;
    char operation;

    printf("Enter the operation you wish to make \n");
    scanf("%c",&operation);

    printf("Enter two numbers \n");
    scanf("%f",&number1);
    scanf("%f",&number2);


    switch(operation)
    {
        case '+':
            printf("The sum of the two numbers %f and %f is %f \n",number1,number2,number1+number2);
            break;
        case '-':
            printf("The difference of the two numbers %f and %f is %f \n",number1,number2,number1-number2);
            break;
        case '*':
            printf("The Multiplication of the two numbers %f and %f is %f \n",number1,number2,number1*number2);
            break;
        case '/':
            printf("The division of the two numbers %f and %f is %f \n",number1,number2,number1/number2);
            break;
        default:
            printf("Invalid Input \n");
            break;

    }
}
