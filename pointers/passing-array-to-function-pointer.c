// C program to understand passing 1D array to a function

// System header
#include <stdio.h>  // printf

// func
// Declaring formal argument as pointer
void func(int *ptr)
{
    int i;

    printf("%s: ", __func__);
    for (i=0; i<5; i++)
    {
        ptr[i] = ptr[i] + 2;
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

// Main
int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    func(arr);

    printf("%s: ", __func__);
    for (i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
