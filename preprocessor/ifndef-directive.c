/*******************************************************************************
@desc C program to understand the use of #ifndef directives.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Macros
// #define FLAG

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 4;
    int iNum2 = 7;

    // The block is executed if FLAG is not defined
    #ifndef FLAG
        printf("FLAG is not defined\n");
        iNum1++;
        iNum2++;
    #endif

    printf("Number1 = %d, Number2 = %d\n", iNum1, iNum2);

    return 0;
}
