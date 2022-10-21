/*******************************************************************************
C program to illustrate formatted for integer input.
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
    scanf("%2d", &iNum1);
    printf("Enter number 2: ");
    scanf("%3d", &iNum2);

    printf("Number 1 = %d\nNumber 2 = %d\n", iNum1, iNum2);

    return 0;
}
