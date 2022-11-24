// C program to assign the value of one pointer to another pointer

// System headers
#include <stdio.h>  // printf

// Main
int main()
{
    int i = 10;
    int *ptr1 = &i;
    int *ptr2;

    printf("Value of ptr1 = %p, Value at ptr1 = %d\n", ptr1, *ptr1);

    // It is possible to assign the value of one pointer to another pointer,
    // provided their base type is same
    ptr2 = ptr1;

    printf("Value of ptr2 = %p, Value at ptr2 = %d\n", ptr2, *ptr2);

    return 0;
}
