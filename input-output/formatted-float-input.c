/*******************************************************************************
C program to illustrate formatted for float input.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    float   fNum1;
    float   fNum2;

    printf("Enter number 1: ");
    scanf("%3f", &fNum1);
    printf("Enter number 2: ");
    scanf("%4f", &fNum2);

    printf("Number 1 = %f\nNumber 2 = %f\n", fNum1, fNum2);

    return 0;
}
