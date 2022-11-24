// C program to print the value and address of the elements of an array
// using subscript notation and pointer notation

// Sytem headers
#include <stdio.h>  // printf

// Main
int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    // Print addresses and values of array elements in subscript notation
    for(i=0; i<5; i++)
    {
        printf("&arr[%d] = %p, ", i, &arr[i]);
        printf("arr[%d] = %d, ", i, arr[i]);
        printf("%d[arr] = %d\n", i, i[arr]);
    }

    // Print addresses and values of array elements in pointer notation
    for(i=0; i<5; i++)
    {
        printf("arr+%d = %p, ", i, arr+i);
        printf("*(arr+%d) = %d, ", i, *(arr+i));
        printf("*(%d+arr) = %d\n", i, *(i+arr));
    }

    return 0;
}
