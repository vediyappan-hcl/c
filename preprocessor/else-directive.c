/*******************************************************************************
@desc C program to understand the use of #else directive.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Macro
#define FLAG 5

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 10;
    int iNum2 = 5;

    // The block with non-zero result is compiled
    #if FLAG < 3
        printf("Result of condition is non-zero, executing statement between #if and #endif\n");
        iNum1 = iNum1 + iNum2;
        iNum2 = iNum1 * iNum2;
    #else
        printf("Executing statements between #else and #endif\n");
        iNum1 = iNum1 - iNum2;
        iNum2 = iNum1 / iNum2;
    #endif

    printf("Number1 = %d, Number2 = %d\n", iNum1, iNum2);

    return 0;
}
