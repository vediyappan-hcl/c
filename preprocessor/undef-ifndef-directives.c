/*******************************************************************************
@desc C program to understand the use of #undef directive.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macros
#define FLAG

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 4;
    int iNum2 = 7;

    // The block is executed if FLAG is defined
    #ifdef FLAG
        printf("FLAG is defined\n");
        iNum1++;
        iNum2++;
    #endif
    #undef FLAG
    // This block is executed if FLAG is not defined or undefined
    #ifndef FLAG
        printf("FLAG is not defined or undefined\n");
        iNum1--;
        iNum2--;
    #endif

    printf("Number1 = %d, Number2 = %d\n", iNum1, iNum2);

    return 0;
}
