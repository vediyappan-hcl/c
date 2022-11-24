// C program to understand NULL pointer

// System headers
#include <stdio.h>  // printf
#include <stdlib.h> // exit

// Main()
int main(void)
{
    // NULL pointer gaurantees that it does not point to any valid memory location
    int *ptr = NULL;

    // Checking NULL pointer
    // Uncomment this block to avoild program crash i.e., segmentation fault
    /*
    if (ptr == NULL)
    {
        printf("ptr is NULL\n");
        exit(1);
    }
    */

    // Dereferencing NULL pointer may cause program crash i.e., segmentation fault
    printf("Dereferenced value = %d\n", *ptr);

    return 0;
}
