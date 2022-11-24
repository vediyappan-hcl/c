// C program to understand the function returning pointer

// System header
#include <stdio.h>  // printf

// func
int *func()
{
    int  num = 5;
    int *ptr = &num;

    printf("*ptr = %d\n", *ptr);

    // Returning pointer that points to the a local variable
    // leads to undefined behavior
    return ptr;
}

// Main
int main(void)
{
    int *ptr;

    ptr = func();

    printf("*ptr = %d\n", *ptr);

    return 0;
}
