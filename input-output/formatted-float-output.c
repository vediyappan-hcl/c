/*******************************************************************************
C program to illustrate formatted for float output.
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
    scanf("%f", &fNum1);
    printf("Enter number 2: ");
    scanf("%f", &fNum2);

    printf("Number 1 = %4.1f\nNumber 2 = %7.2f\n", fNum1, fNum2);

    return 0;
}
