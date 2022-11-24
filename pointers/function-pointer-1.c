// C program to invoke a function using function pointer

// System headers
#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

// Main
int main(void)
{
    int (*fp)(int, int);
    int sum;

    // Invoking function directly using function's name 
    sum = add(10, 20);
    printf("Sum = %d\n", sum);

    // Invoking function indirectly by dereferencing function pointer
    fp = add;
    sum = (*fp)(10, 20);
    printf("Sum = %d\n", sum);

    return 0;
}
