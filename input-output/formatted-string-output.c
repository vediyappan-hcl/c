/*******************************************************************************
C program to illustrate formatted for string output.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    char sName[16];

    printf("Enter Name: ");
    scanf("%s", sName);

    printf("Name = %3s\n", sName);
    printf("Name = %10s\n", sName);
    printf("Name = %.3s\n", sName);
    printf("Name = %8.3s\n", sName);

    return 0;
}
