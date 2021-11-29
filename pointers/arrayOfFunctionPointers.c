/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *
 * Filename:    arrayOfFunctionPointers.c
 * Description: C program to illustrate array of function pointers
 * Author:      Vediyappan V.
 * Date:        27-Nov-2021
 *
 * Brief: 
 *  - A function pointer is a pointer that stores the address of the function
 *    and invokes the function whenever required.
 *  - The function pointer array is called as an array of function pointer.
 *  - Syntax: return_type (*ptr_name[arr-size]) (type1, type2, ...);
 *
 * -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */

#include <stdio.h>

// function to add
int add(int num1, int num2)
{
    printf("%s: num1 = %d, num2 = %d\n", __func__, num1, num2);
    return num1+num2;
}

// function to subtract
int sub(int num1, int num2)
{
    printf("%s: num1 = %d, num2 = %d\n", __func__, num1, num2);
    return num1-num2;
}

// function to multiply
int mul(int num1, int num2)
{
    printf("%s: num1 = %d, num2 = %d\n", __func__, num1, num2);
    return num1*num2;
}

// function to divide
int div(int num1, int num2)
{
    printf("%s: num1 = %d, num2 = %d\n", __func__, num1, num2);

    // floating point error handling
    if (num2)
        return num1/num2;
    else
        return 0;
}

int main()
{
    // declaring variables
    int num1 = 10;
    int num2 = 5;
    int option;
    int result;
    int i;

    // declaring function pointer
    int (*fp[4]) (int, int);

    // assigning function names to elements of array of function pointers
    fp[0] = add;
    fp[1] = sub;
    fp[2] = mul;
    fp[3] = div;

    // scanning user option
    printf("options: 1. add, 2. sub, 3. mul, 4. div\nenter your option: ");
    scanf("%d", &option);

    // invoking functions using function pointers
    result = (*fp[option-1])(num1, num2);

    // displaying result
    printf("result = %d\n", result);
    
    return 0;
}
