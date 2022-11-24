// C program to understand function returning pointer

// System header
#include <stdio.h>  // printf

// func
int *func(int *ptr, int i)
{
    ptr = ptr + i;

    // Return the pointer
    return ptr;
}

// Main
int main(void)
{
    int arr[5] = {11, 12, 13, 14, 15};
    int *ptr;
    int i = 3;

    // Capture the pointer returned by function
    ptr = func(arr, i);

    printf("Base address = %p, Pointer points to %p, Pointer contains value %d\n",
            arr, ptr, *ptr);    

    return 0;
}
