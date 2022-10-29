/*******************************************************************************
@desc C program to understand the use of #error directive.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macro
// #define FLAG

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    #ifndef FLAG
    // This directive stops compilation and prints fatal error message attached
    #error FLAG is not defined
    #endif

    return 0;
}
