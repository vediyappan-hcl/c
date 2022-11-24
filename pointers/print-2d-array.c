// C program to print the values and address of elements of 2D array

// System header
#include <stdio.h>

// Main
int main(void)
{
    int arr[3][4] = {
                        {51, 52, 53, 54},
                        {61, 62, 63, 64},
                        {71, 72, 73, 74}
                    };
    int i, j;

    // Iterating for rows
    for(i=0; i<3; i++)
    {
        printf("Address of array %d = %p %p\n", i, arr[i], *(arr+i));

        // Iterating for columns
        for(j=0; j<4; j++)
        {
            printf("arr[%d][%d] = %d %d\n", i, j, arr[i][j], *(*(arr+i)+j));
        }
    }

    return 0;
}
