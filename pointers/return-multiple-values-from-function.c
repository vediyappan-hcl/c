// C program to return more than one value from a function using call by reference

// System header
#include <stdio.h>  //printf

// func
void func(int num1, int num2, int *psum, int *pdiff)
{
    // Receving two references and returning two values
    *psum  = num1 + num2;
    *pdiff = num1 - num2;
}

// Main
int main(void)
{
    int num1 = 30;
    int num2 = 20;
    int sum  = 0;
    int diff = 0;

    // Passing two references and receiving two values from the function
    func(num1, num2, &sum, &diff);

    printf("sum = %d, diff = %d\n", sum, diff);

    return 0;
}
