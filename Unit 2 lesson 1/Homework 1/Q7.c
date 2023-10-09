/* 
Ex7: Write Source Code to Swap Two Numbers without temp variable.

Author: Kareem Hani
*/
#include "stdio.h"

void main()
{
    int x = 10, y = 5;
 
    /* Code to swap 'x' (1010) and 'y' (0101) using XOR */ 
    x = x ^ y; /* x now becomes 15 (1111) */ 
    y = x ^ y; /* y becomes 10 (1010) */ 
    x = x ^ y; /*x becomes 5 (0101) */ 
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}