// C program to understand uninitialized/wild pointer

// System header
#include <stdio.h>  // printf

// Global pointer
int *g_ptr;

// Main
int main(void)
{
    // Local static pointer
    static int *s_ptr;
    // Automatic pointer
    int *ptr;

    // Global and local static pointers are automatically initialized to NULL
    printf("Value of global pointer = %p\n", g_ptr);
    printf("Value of static pointer = %p\n", s_ptr);

    // Auto pointer contains garbage value
    printf("Value of auto pointer = %p\n", ptr);

    // Dereferencing uninitialized/wild pointer may give unpredictable results
    // It may even cause program crash i.e., segmentation fault
    printf("Value at auto pointer = %d\n", *ptr);

    return 0;
}

