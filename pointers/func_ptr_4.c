// C program to illustrate a function pointer points to a function which takes
// an integer and a character as arguments and returns an integer pointer

#include <stdio.h>
#include <stdlib.h>

// Function definition
int *func(int num, char ch)
{
    printf("num = %d, ch = %c\n", num, ch);

    int *ptr = (int *) malloc(sizeof(int));

    *ptr = num + (int)ch;

    return ptr;
}

int main(void)
{
    // Function pointer
    int *(*fp)(int, char);

    fp = func;

    int *result = fp(10, 'a');

    printf("Result = %d\n", *result);

    return 0;
}
