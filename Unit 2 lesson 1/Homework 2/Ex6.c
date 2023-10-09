/* 
Ex6: Write C Program to calculate sum of the natural numbers

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    int number,count,sum=0;

    printf("Enter a number \n");
    scanf("%d",&number);

    for( count=0;count<=number;++count)
    {
        sum=sum+count;
    }
    printf("Sum=%d \n",sum);
}