/*******************************************************************************
C program to illustrate character I/O.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    char    chVar;

    printf("Enter a character: ");
    // Input a character
    chVar = getchar();

    printf("Entered character: ");
    // Output a character
    putchar(chVar);
    printf("\n");

    return 0;
}
