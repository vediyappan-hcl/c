/*******************************************************************************
@desc C program to swap two numbers of any data type using macro.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macro
#define SWAP(dType,x,y) {dType temp; temp=x, x=y, y=temp;} 

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 7;
    int iNum2 = 9;

    printf("Before swapping: iNum1 = %d, iNum2 = %d\n", iNum1, iNum2);

    SWAP(int, iNum1, iNum2);
    // Expanded as {int temp; temp=iNum1, iNum1=iNum2, iNum2=temp;}

    // Result will be 9 and 7 as expected
    printf("After swapping:  iNum1 = %d, iNum2 = %d\n", iNum1, iNum2);

    return 0;
}
