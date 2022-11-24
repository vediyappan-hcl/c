// C program to allocate dynamic memory to 1D array

// System headers
#include <stdio.h>  // printf
#include <stdlib.h> // malloc, free, exit

// Main
int main(void)
{
    int *arr;
    int  n;
    int  i;

    // Read the size
    printf("Enter the number of integers to be entered: ");
    scanf("%d", &n);

    // Allocate the dynamic memory
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory is not available\n");
        exit(1);
    }

    // Read the values
    for(i=0; i<n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &arr[i]);
    }

    // Write the values
    printf("1D array = ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free up the memory
    free(arr);

    return 0;
}
