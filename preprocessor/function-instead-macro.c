/*******************************************************************************
@desc C program to understand a problem with macros.
@info Macro cannot be used in some scenarios. Use function instead of macro when needed.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Macro with arguments, enclosed whole macro expansion inside parentheses
// #define SQUARE(x) ((x)*(x))

/*******************************************************************************
@desc This function is to return a square number
@param Number to which square number is needed
@return Square number
*******************************************************************************/
int square(int iNum)
{
    return iNum * iNum;
}

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum = 7;
    int iSqr;

    // iSqr = SQUARE(iNum++);
    iSqr = square(iNum++);

    // Result will be 49 and 8 as expected
    printf("Square Number = %d, Number = %d\n", iSqr, iNum);

    return 0;
}
