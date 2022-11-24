// C program to understand the subscripting pointer variable

// Sytem headers
#include <stdio.h>  // printf

// Main
int main(void)
{
    int  arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int  i;

    // Printing addresses and values of array elements
    for(i=0; i<5; i++)
    {
        printf("Address of arr[%d]: %p %p %p %p\n",
                i, &arr[i], arr+i, &ptr[i], ptr+i); 
        printf("Value of arr[%d]: %d %d %d %d\n",
                i, arr[i], *(arr+i), ptr[i], *(ptr+i)); 
    }

    return 0;
}
