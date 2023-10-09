/* 
Ex6: Write Source Code to Swap Two Numbers

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    /* The max variable will be used to swap between the two numbers */
    int number1,number2,max;

    printf("Enter two numbers to swap them \n");
    
    /* Enter first number */
    scanf("%d",&number1);

    /* Enter second number */
    scanf("%d",&number2);

    printf("Before Swapping \n");

    printf(" Number 1 = %d \n",number1);
    printf(" Number 2 = %d \n",number2);

    max=number1;
    number1=number2;
    number2=max;

    printf("After Swapping \n");

    printf(" Number 1 = %d \n",number1);
    printf(" Number 2 = %d \n",number2);
}