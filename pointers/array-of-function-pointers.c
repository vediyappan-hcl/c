// C program to understand array of function pointer

// System headers
#include <stdio.h>  // printf

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}

// Main
int main(void)
{
    int (*fp[])(int, int) = {add, sub, mul, div};
    char *operation[] = {"Add", "Subtract", "Multiply", "Divide"};
    int num1;
    int num2;
    int i;

    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);

    for(i=0; i<4; i++)
    {
        printf("%s: %d\n", operation[i], (*fp[i])(num1, num2));
    }

    return 0;
}
