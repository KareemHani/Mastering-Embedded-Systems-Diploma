/* 
Ex2: Write C Program to check whether vowel or Consonant

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    char Character;

    printf("Enter a Character \n");
    scanf("%c",&Character);

    if(Character=='a'|| Character=='A'||Character=='e' || Character=='E' ||Character=='i'|| Character=='I'|| Character=='o'|| Character=='O'|| Character=='u' || Character=='U' )
    {
        printf(" Entered character is Vowel \n");
    }

    else
    {
        printf(" Entered character is Consonant \n");
    }

}