/* 
Ex5: Write C Program to Find ASCII Value of a Character

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    char Character;

    printf(" Enter a character to be entered \n");
    scanf("%c",&Character);

    /* %d displays the integer value of a character */ 
    /* %c displays the actual character */
    printf(" The ASCII value of the character %c is %d ",Character,Character);

}