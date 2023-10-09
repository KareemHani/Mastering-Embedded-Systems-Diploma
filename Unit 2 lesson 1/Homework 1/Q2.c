/* 
Ex2:Write C Program to Print a Integer Entered by a User

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    int number;
    
    printf("Enter a number \n");

    /* Ask the user to enter number */
    scanf("%d",&number);

    /* Print the number entered by the user */
    printf("The Number entered by the user: %d \n",number);
}