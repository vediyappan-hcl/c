// C program to understand pointer to pointer

// System headers
#include <stdio.h>  // printf

// Main
int main(void)
{
    int num = 10;

    // Declaring and initializing single pointer (pointer to int)
    int *ptr = &num;

    // Declaring and initializing double pointer (pointer to pointer to int)
    int **pptr = &ptr;

    printf("Address of num  = %p\tValue of num  = %d\n", &num, num);
    printf("Address of ptr  = %p\tValue of ptr  = %p\tValue at ptr  = %d\n", &ptr, ptr, *ptr);
    printf("Address of pptr = %p\tValue of pptr = %p\tValue at pptr = %d\n", &pptr, pptr, **pptr);

    return 0;
}
