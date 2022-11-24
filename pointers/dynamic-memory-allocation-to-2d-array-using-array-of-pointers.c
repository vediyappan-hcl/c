// C program to allocate dynamic memory to 2D array using array of pointers

// System headers
#include <stdio.h>  // printf
#include <stdlib.h> // malloc, free, exit

// Main
int main(void)
{ 
    int *arr[3];
    int  cols;
    int  i, j;

    // Read the size
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate dynamic memory
    // Initialize each pointer in array by address of dynamically allocated memory
    for(i=0; i<3; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL)
        {
            printf("Memory is not available\n");
            exit(1);
        }
    }

    // Read the values
    for(i=0; i<3; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("Enter value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Write the values
    printf("\nMatrix =\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free up memory
    for(i=0; i<3; i++)
    {
        free(arr[i]);
    }

    return 0;
}
