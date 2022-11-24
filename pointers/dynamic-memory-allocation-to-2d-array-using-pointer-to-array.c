// C program to allocate dynamic memory to 2D array using pointer to an array

// System headers
#include <stdio.h>   // printf
#include <stdlib.h>  // malloc, exit

// Main
int main(void)
{
    int (*arr)[4];
    int rows;
    int i, j;

    // Read the size
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Allocate the dynamic memory
    arr = (int (*)[4])malloc(rows * 4 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory is not available\n");
        exit(1);
    }

    // Read the values
    for(i=0; i<rows; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Write the values
    printf("\nMatrix =\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free up memory
    free(arr);

    return 0;
}
