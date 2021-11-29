/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *
 * Filename:    functionPointer.c
 * Description: C program to illustrate function pointer
 * Author:      Vediyappan V.
 * Date:        27-Nov-2021
 *
 * Brief: 
 *  - A function pointer is a pointer that stores the address of the function
 *    and invokes the function whenever required.
 *  - Function name represents function's base address.  
 *  - Function pointer is used to resolve the run time-binding.
 *
 * -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */

#include <stdio.h>

// declaring function pointer
int (*fp) (int, int);

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
    return num1/num2;
}

int main()
{
    // declaring variables
    int num1 = 10;
    int num2 = 5;
    int sum;
    int diff;
    int prod;
    int quot;

    // assiging address of add function to function pointer fp
    fp = add;
    // calling add function through function pointer fp
    sum = (*fp)(num1, num2);
    printf("%s: sum = %d\n", __func__, sum);
    
    fp = sub;
    diff = (*fp)(num1, num2);
    printf("%s: diff = %d\n", __func__, diff);
    
    fp = mul;
    prod = (*fp)(num1, num2);
    printf("%s: prod = %d\n", __func__, prod);
    
    fp = div;
    quot = (*fp)(num1, num2);
    printf("%s: quot = %d\n", __func__, quot);
    
    return 0;
}
