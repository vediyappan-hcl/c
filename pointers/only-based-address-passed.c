// C program to understand the fact that when an array is passed to a function,
// the receiving parameter is declared as a pointer.

// System headers
#include <stdio.h>  // printf

// func
void func(char arrc[], int arri[], float arrf[])
{
    printf("%s: %p %p %p\n", __func__, arrc, arri, arrf);

    // See to that the size of each is 4 bytes only
    // Whole array is never passed to a function, only base address is passed
    // More effecient to copy a pointer instead of copying the whole array
    printf("sizeof(arrc) = %lu\n", sizeof(arrc));
    printf("sizeof(arri) = %lu\n", sizeof(arri));
    printf("sizeof(arrf) = %lu\n", sizeof(arrf));
}

// Main
int main(void)
{
    char  arrc[5] = {'a', 'b', 'c', 'd', 'e'};
    int   arri[5]  = {10, 20, 30, 40, 50};
    float arrf[5]  = {1.2, 2.3, 3.4, 4.5, 6.7};

    printf("%s: %p %p %p\n", __func__, arrc, arri, arrf);

    printf("sizeof(arrc) = %lu\n", sizeof(arrc));
    printf("sizeof(arri) = %lu\n", sizeof(arri));
    printf("sizeof(arrf) = %lu\n", sizeof(arrf));

    func(arrc, arri, arrf);
}
