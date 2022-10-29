/*******************************************************************************
@desc C program to understand a problem with macro.
@info Using same variable name in a function calling macro and in macro may cause
      conflict between them.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macro with arguments
#define SWAP(dType,x,y) {dType temp; temp=x, x=y, y=temp;} 
// #define SWAP(dType,x,y) {dType TEMP; TEMP=x, x=y, y=TEMP;} 

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 7;
    int temp = 9;

    printf("Before swapping: Number1 = %d, Number2 = %d\n", iNum1, temp);

    SWAP(int, iNum1, temp);
    // Expanded as {int temp; temp=iNum1, iNum1=temp, temp=temp;}

    // Result will be 7 and 9 which is unexpected
    // To avoid such issues, use naming convention for local vairables declared in macros
    // Expanded as {int TEMP; TEMP=iNum1, iNum1=temp, temp=TEMP;} --- results 9 and 7
    printf("After swapping:  Number1 = %d, Number2 = %d\n", iNum1, temp);

    return 0;
}
