/*******************************************************************************
@desc C program to understand a problem with macro.
@info Whenever if condition is used in macro, enclose the expansion with curly
      braces or use conditional operator 
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Macro with arguments
#define MACRO(x) if(x==0) printf("Duck out!\n");
// #define MACRO(x) { if(x==0) printf("Duck out!\n"); }
// #define MACRO(x) x==0 ? printf("Duck out!\n") : printf("%d\n", x);

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iRuns = 54;

    if(iRuns < 100)
        MACRO(iRuns)
        // Expanded as
        // if(iRuns==0)
        //     printf("Duck out!\n");
    else
        // Printing this one is unexpected
        printf("Scored a century!\n");

    return 0;
}
