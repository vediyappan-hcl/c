// C program to understand array of pointers.

// System header
#include <stdio.h>  // printf

// Main
int main(void)
{
    int arr[3] = {3, 6, 9};
    int *ptr[3];
    int i;

    // Array of pointers hold addresses of elements of another array    
    for (i=0; i<3; i++)
    {
        ptr[i] = &arr[i];
        printf("ptr[%d] = %p\n", i, ptr[i]);
        printf("*ptr[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}
