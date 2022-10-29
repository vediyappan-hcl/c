/*******************************************************************************
@desc C program to understand a problem with macros.
@info Macro cannot be used in some scenarios.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Macro with arguments, enclosed whole macro expansion inside pareantheses
#define SQUARE(x) ((x)*(x))

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum = 7;
    int iSqr;

    iSqr = SQUARE(iNum++);

    // Result will be 56 and 9 instead of 49 and 8
    // Because iSqr = ((iNum++)*(iNum++)) --- ((7)*(8)) = 56 and 8++ = 9
    // In such cases, it is better to use a function instead of macro
    printf("Square Number = %d, Number = %d\n", iSqr, iNum);

    return 0;
}
