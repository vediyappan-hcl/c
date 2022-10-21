/*******************************************************************************
C program to illustrate formatted for integer output.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1;
    int iNum2;

    printf("Enter number 1: ");
    scanf("%d", &iNum1);
    printf("Enter number 2: ");
    scanf("%d", &iNum2);

    printf("Number 1 = %3d\nNumber 2 = %4d\n", iNum1, iNum2);

    return 0;
}
