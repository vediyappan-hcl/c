/*******************************************************************************
@desc C program to illustrate changing value of const variable through pointer
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    const int   iVar = 10;
    // Changing the value of const variable is possible through pointer
    // Compiler may give warning while typecasting and discard the const qualifier
    // int        *pVar = &iVar;
    // The below typecasting may not even show the warning
    int        *pVar = (int *) &iVar;

    printf("Initial value of iVar = %d\n", iVar);

    *pVar = 20;

    // Here the modified value can be seen, prints 20
    printf("Modified value of iVar = %d\n", iVar);

    return 0;
}
