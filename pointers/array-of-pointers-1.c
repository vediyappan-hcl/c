// C program to understand array of pointers.

// System header
#include <stdio.h>  // printf

// Main
int main(void)
{
    int num1 = 3;
    int num2 = 5;
    int num3 = 7;
    int *ptr[3];
    int i;

    // Array of pointers hold addresses of variable of same type
    ptr[0] = &num1;
    ptr[1] = &num2;
    ptr[2] = &num3;

    for (i=0; i<3; i++)
    {
        printf("ptr[%d] = %p\n", i, ptr[i]);
        printf("*ptr[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}
