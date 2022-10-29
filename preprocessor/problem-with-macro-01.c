/*******************************************************************************
@desc C program to understand a problem with macros.
@info If macro is accepting arguments, it is better to put parentheses around
      each argument.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macro with arguments
#define PROD(x,y) x*y
// #define PROD(x,y) (x)*(y)

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    // Result will be 8 as expected --- 2*4 = 8
    printf("Product = %d\n", PROD(2,4));

    // Result will be 12 instead of 20 expected --- 2+3*3+1 = 2+9+1 = 12
    // To get the desired result, change macro as (x)*(y) --- commented macro
    printf("Product = %d\n", PROD(2+3,3+1));

    return 0;
}
