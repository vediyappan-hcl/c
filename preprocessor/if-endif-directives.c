/*******************************************************************************
@desc C program to understand the use of #if and #endif directives.
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
    int iNum2 = 20;

    // If result is non-zero then the statements between #if and #endif are compiled
    #if FLAG > 3
    // #if FLAG < 4
        printf("Result of condition is non-zero, executing statement between #if and #endif\n");
        iNum1 = iNum1 + iNum2;
        iNum2 = iNum1 * iNum2;
        printf("Values of variables iNum1 and iNum2 has been changed!\n");
    #endif

    printf("Number1 = %d, Number2 = %d\n", iNum1, iNum2);

    return 0;
}
