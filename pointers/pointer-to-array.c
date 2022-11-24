// C program to understand a pointer to an array.

// System headers
#include <stdio.h>  // printf

// Main
int main(void)
{
    int arr[5] = {91, 93, 95, 97, 99};
    int *ptr = arr;
    int (*parr)[5] = &arr;

    printf("ptr = %p, parr = %p\n", ptr, parr);

    // On dereferencing a pointer we get a value
    // On dereferencing pointer to an array, we get array and base address of the array
    printf("*ptr = %d, *parr = %p\n", *ptr, *parr);
    printf("sizeof(ptr) = %lu, sizeof(parr) = %lu\n", sizeof(ptr), sizeof(parr));
    printf("sizeof(*ptr) = %lu, sizeof(*parr) = %lu\n", sizeof(*ptr), sizeof(*parr));

    return 0;
}
