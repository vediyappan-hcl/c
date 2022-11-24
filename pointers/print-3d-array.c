// C program to print the elements of 3D array using pointer notation

// System header
#include <stdio.h>  // printf

// Main
int main(void)
{
    int arr[2][3][2] = {
                          {
                             {11, 12},
                             {21, 22},
                             {31, 32}
                          },
                          {
                             {51, 52},
                             {61, 62},
                             {71, 72}
                          }
                       };
    int i, j, k;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<2; k++)
            {
                // Subscript notation
                // printf("%d ", arr[i][j][k]);
                // Pointer notation
                printf("%d ", *(*(*(arr+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
