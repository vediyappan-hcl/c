// C program to understand array of pointers

// System header
#include <stdio.h>  // printf

// Main
int main(void)
{
    int arr[3][4] = {
                       {11, 21, 31, 41},
                       {12, 22, 32, 42},
                       {13, 23, 33, 43}
                    };
    int *ptr[3];
    int i, j;

    // Array of pointers hold base addresses of 1D array
    for (i=0; i<3; i++)
    {
        ptr[i] = arr[i];
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
