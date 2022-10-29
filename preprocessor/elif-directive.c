/*******************************************************************************
@desc C program to understand the use of #elif directive.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macro
#define FLAG 2

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 4;
    int iNum2 = 7;

    // The block with non-zero result is compiled
    #if FLAG == 0
        printf("FLAG is 0\n");
        iNum1 = iNum1 + 2;
        iNum2 = iNum2 + 4;
    #elif FLAG == 1
        printf("FLAG is 1\n");
        iNum1 = iNum1 - 2;
        iNum2 = iNum2 - 4;
    #elif FLAG == 2
        printf("FLAG is 2\n");
        iNum1 = iNum1 * 2;
        iNum2 = iNum2 * 4;
    #else
        printf("FLAG is greater than 2 or lesser than 0\n");
        iNum1 = iNum1 / 2;
        iNum2 = iNum2 / 4;
    #endif

    printf("Number1 = %d, Number2 = %d\n", iNum1, iNum2);

    return 0;
}
