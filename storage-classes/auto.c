/*******************************************************************************
C program to illustrate automatic variables 
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

// Function declarations
void func(void);

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    func();
    func();
    func();

    return 0;
}


/*******************************************************************************
@desc func
*******************************************************************************/
void func(void)
{
    // Automatic variables
    // Come into existance each time the function is executed
    // Destroyed when the function terminates
    int iNum1 = 5;
    int iNum2 = 10;

    printf("iNum1 = %d, iNum2 = %d\n", iNum1, iNum2);

    iNum1++;
    iNum2++;
}
