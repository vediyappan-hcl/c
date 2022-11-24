// C program to print the value and address of the elements of an array
// using subscript notation

// Sytem headers
#include <stdio.h>  // printf

// Main
int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    // Printing addresses and values of array elements
    for(i=0; i<5; i++)
    {
        printf("&arr[%d] = %p\t", i, &arr[i]);
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
