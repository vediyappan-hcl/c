// C program to understand call by value

// System header    
#include <stdio.h>  // printf

// Function declaration
int func(int num1, int num2);

// Main
int main(void)
{
    int num1 = 5;
    int num2 = 10;

    printf("%s: Before execution of func: ", __func__);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Calling the function by passing the values
    // Any changes made to the formal arguments do not change the actual arguments
    func(num1, num2);

    printf("%s: After execution of func:  ", __func__);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// func
int func(int num1, int num2)
{
    printf("%s: Before changing the values: ", __func__);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    num1++;
    num2++;

    printf("%s: After changing the values:  ", __func__);
    printf("num1 = %d, num2 = %d\n", num1, num2);
}
