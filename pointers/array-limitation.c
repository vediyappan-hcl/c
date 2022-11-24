// C program to understand the difference between name of an array and a 
// pointer variable

// Sytem headers
#include <stdio.h>  // printf

// Main
int main(void)
{
    int  arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int  i;

    // Printing addresses and values of array elements
    for(i = 0; i < 5; i++)
    {
        printf("Address of arr[%d]: %p %p %p %p\n",
                i, &arr[i], arr+i, &ptr[i], ptr+i); 
        printf("Value of arr[%d]: %d %d %d %d\n",
                i, arr[i], *(arr+i), ptr[i], *(ptr+i)); 
    }

    // Array name is a constant pointer so it will always point to 0th element
    // of an array. It is not a variable, so we can't assign some other address
    // to it neither move it by incrementing or decrementing.
    // Illegal operations
    // arr = &arr[2];
    // arr++;
    // arr = arr-1;

    // Pointer is a variable, all the above operations are valid for it
    ptr = &arr[2];
    printf("Address = %p, Value = %d\n", ptr, *ptr);
    ptr++;
    printf("Address = %p, Value = %d\n", ptr, *ptr);
    ptr = ptr - 1;
    printf("Address = %p, Value = %d\n", ptr, *ptr);

    return 0;
}
