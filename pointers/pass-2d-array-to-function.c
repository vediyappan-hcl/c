// C program to pass 2D array to function

// System header
#include <stdio.h>  // printf

// func
void func(int (*ptr)[4])
{
    int i, j;

    printf("%s: sizeof(ptr)  = %lu\n", __func__, sizeof(ptr));
    printf("%s: sizeof(*ptr) = %lu\n", __func__, sizeof(*ptr));

    printf("%s: 2D array =\n", __func__);
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            ptr[i][j] = ptr[i][j] + 3;
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
}

// Main
int main(void)
{
    int arr[3][4] = {
                       {11, 12, 13, 14},
                       {21, 22, 23, 24},
                       {31, 32, 33, 34}
                    };
    int i, j;

    printf("%s: sizeof(arr) = %lu\n", __func__, sizeof(arr));

    printf("%s: 2D array =\n", __func__);
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    func(arr);

    return 0;
}
