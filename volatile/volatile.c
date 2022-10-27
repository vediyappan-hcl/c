/*******************************************************************************
@desc C program to illustrate the usage of volatile
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    // Volatile keyword is indended to prevent the compiler from applying any
    // optimization on variables/objects that can change in ways that cannot be
    // determined by the compiler
    const volatile int   iVar = 10;
    int                 *pVar = (int *) &iVar;

    printf("Initial value of iVar = %d\n", iVar);

    *pVar = 20;

    // Here the expectation is that value should remain unchanged, prints 10
    // This is just an example, may not work as expected
    printf("Modified value of iVar = %d\n", iVar);

    return 0;
}
