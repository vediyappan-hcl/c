// C program to understand the limitations of the address operator

// System headers
#include <stdio.h>  // printf

// Main
int main(void)
{
    int num1 = 10;
    int num2 = 20;
    register int reg = 30;

    // Address operator cannot be used with constants, expressions and register variables
    printf("Address of constant = %p\n", &123);
    printf("Address of expression = %p\n", &(num1+num2));
    printf("Address of register variable = %p\n", &reg);

    return 0;
}
