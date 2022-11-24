// C program to understand passing 1D array to a function

// System header
#include <stdio.h>  // printf

// func
// Declaring formal argument as unsized array or sized array both will work
// void func(int arr[])
void func(int arr[5])
{
    int i;

    printf("%s: ", __func__);
    for (i=0; i<5; i++)
    {
        arr[i] = arr[i] + 2;
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main
int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    // Passing the array to the function
    func(arr);

    printf("%s: ", __func__);
    for (i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
