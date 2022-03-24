/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *
 * Filename:    assignment-operator.c
 * Description: C program to illustrate assignment operator
 * Author:      Vediyappan V.
 * Date:        
 * 
 *  - Assignment operator used to assign values from right side operands to
 *    left side operand
 * -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */

#include <stdio.h>

int main()
{
    // declaring variables
    int num1, num2, temp;

    // scanning inputs
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    // displaying before swapping numbers
    printf("Before swapping: num1 = %d\tnum2 = %d\n", num1, num2);

    // swapping two numbers using assignment operator
    // assigning num1 to temp
    temp = num1;
    // assigning num2 to num1
    num1 = num2;
    // assigning temp to num2
    num2 = temp;

    // displaying after swapping numbers
    printf("After  swapping: num1 = %d\tnum2 = %d\n", num1, num2);

    return 0;
}
