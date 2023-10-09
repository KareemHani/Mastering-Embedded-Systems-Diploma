/* 
Ex5: Write C Program to check if the character is alphabet or not

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    char character;

    printf("please enter a character \n");
    scanf("%c",&character);

    if(character>='a'&& character<='z' || character>='A'&& character<='Z')
    {
        printf(" Character is alphabet \n");

    }

    else
    {
        printf(" Character is not alphabet \n");
    }

}