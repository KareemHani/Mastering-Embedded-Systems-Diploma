/* 
Ex3: Write C Program to find the largest number among the Three Numbers

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    float number1,number2,number3;

    printf("Enter three numbers \n");
    scanf("%f",&number1);
    scanf("%f",&number2);
    scanf("%f",&number3);

    if(number1>=number2 && number1>=number3)
    {
        printf("the largest number is %.2f \n",number1);
    }

    else if(number2>=number1 && number2>=number3)
    {
        printf("the largest number is %.2f \n",number2);
    }
    
    else
    {
        printf("the largest number is %.2f \n",number3);
    }


}