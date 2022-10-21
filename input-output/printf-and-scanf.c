/*******************************************************************************
C program to illustrate printf and scanf.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int     iVar;
    char    chVar;
    float   fVar;
    char   *sVar;
    int     iVar1;

    // Write a string
    printf("Enter a decimal integer: ");
    // Read a decimal integer    
    scanf("%d", &iVar);

    printf("Enter a character: ");
    // Read a character
    scanf(" %c", &chVar);

    printf("Enter a float: ");
    // Read a float
    scanf("%f", &fVar);

    printf("Enter a string: ");
    // Read a string
    scanf("%s", sVar);

    // Write a decimal integer
    printf("iVar = %d\n", iVar);
    // Write a character
    printf("chVar = %c\n", chVar);
    // Write a float
    printf("fVar = %f\n", fVar);
    // Write a string
    printf("sVar = %s\n", sVar);

    return 0;
}
