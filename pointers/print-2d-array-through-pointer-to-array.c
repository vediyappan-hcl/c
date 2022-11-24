// C program to print the elements of 2D array by subscripting a pointer to an array.

// System header
#include <stdio.h>

// Main
int main(void)
{
    int arr[3][4] = {
                        {21, 22, 23, 24},
                        {31, 32, 33, 34},
                        {41, 42, 43, 44}
                    };
    int (*ptr)[4];
    int i, j;

    ptr = arr;

    // Iterating for rows
    for(i=0; i<3; i++)
    {
        printf("Address of array %d = %p %p\n", i, ptr[i], *(ptr+i));

        // Iterating for columns
        for(j=0; j<4; j++)
        {
            printf("ptr[%d][%d] = %d %d\n", i, j, ptr[i][j], *(*(ptr+i)+j));
        }
    }

    return 0;
}
