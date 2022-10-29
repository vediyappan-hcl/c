/*******************************************************************************
@desc C program to understand a problem with macros.
@info If macro is accepting arguments, it is better to put parentheses around
      the entire macro expansion and also around each argument.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macro with arguments
#define PROD(x,y) (x)*(y)
// Enclosed whole macro expansion inside parentheses
// #define PROD(x,y) ((x)*(y))

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    // Result will be 8 as expected --- 2*4 = 8
    printf("Product = %d\n", PROD(2,4));

    // Result will be 20 as expected --- (2+3)*(3+1) = 5*4 = 20
    printf("Product = %d\n", PROD(2+3,3+1));

    // Result will be 48 instead of 3 expected --- 60/(5)*(4) = 12*4 = 48
    // To get the desired result, enclose whole macro expansion inside parentheses
    printf("Result = %d\n", 60/PROD((2+3),(3+1)));

    return 0;
}
