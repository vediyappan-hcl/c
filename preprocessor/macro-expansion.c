/*******************************************************************************
@desc C program to understand macro expansion.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Capital letters are used to name the macros, distinguish it from other variables
#define MSG "Welcome to the C world!\n"

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    // Preprocessor replaces all the occurences of macro with its expansion
    printf(MSG);

    return 0;
}
