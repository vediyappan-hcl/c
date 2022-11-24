// C program to understand difference between pointer to an integer and
// pointer to an array of integers

// Sytem headers
#include <stdio.h>

// Main
int main(void)
{
    int  arr[5] = {11, 22, 33, 44, 55};
    int *ptr;
    int (*parr)[5];

    ptr  = arr;
    parr = &arr;

    printf("Address of ptr = %p, Address of parr = %p\n", ptr, parr);

    ptr++;
    parr++;
    
    printf("Address of ptr = %p, Address of parr = %p\n", ptr, parr);

    printf("sizeof(ptr)  = %lu, sizeof(*ptr)  = %lu\n", sizeof(ptr), sizeof(*ptr));
    printf("sizeof(parr) = %lu, sizeof(*parr) = %lu\n", sizeof(parr), sizeof(*parr));

    return 0;
}
