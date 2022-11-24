// C program to understand call by reference

// System header
#include <stdio.h>  // printf

// Function declaration
int func(int *ptr1, int *ptr2);

// Main
int main(void)
{
    int num1 = 5;
    int num2 = 10;

    printf("%s: Before execution of func: ", __func__);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Calling the function by passing the values
    // Any changes made to the formal arguments do not change the actual arguments
    func(&num1, &num2);

    printf("%s: After execution of func:  ", __func__);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// func
int func(int *ptr1, int *ptr2)
{
    printf("%s: Before changing the values: ", __func__);
    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);

    (*ptr1)++;
    (*ptr2)++;

    printf("%s: After changing the values:  ", __func__);
    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
}
