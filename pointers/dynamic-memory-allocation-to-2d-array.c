// C program to allocate dynamic memory to 2D array

// System headers
#include <stdio.h>  // printf
#include <stdlib.h> // calloc, free, exit

// Main
int main(void)
{
    int **arr;
    int   rows;
    int   cols;
    int   i, j;

    // Read the sizes
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Allocate dynamic memory for rows
    arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL)
    {
        printf("Memory is not available\n");
        exit(1);
    }

    // Allocate dynamic memory for columns
    for(i=0; i<cols; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL)
        {
            printf("Memory is not available\n");
            exit(1);
        }
    }

    // Read the values
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("Enter value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Write the values
    printf("\nMatrix =\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free up the memory
    for(i=0; i<rows; i++)
    {
        free(arr[i]);
    }

    free(arr);
    
    return 0;
}
