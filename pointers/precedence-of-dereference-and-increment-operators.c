// C program to understand the precedence of dereferencing operator and
// increment operator

// System headers
#include <stdio.h>  // printf

// Main
int main()
{
    int  arr[4] = {10, 20, 30, 40};
    int *ptr = arr;
    int  num = 0;

    // Print before performing operations
    // ptr = 1000, *ptr = 10, num = 0
    printf("ptr = %p\t*ptr = %d\tnum = %d\n", ptr, *ptr, num);

    // Precedence level of * operator and increment/decrement operators is same
    // Associativity is from right to left
    // Considering 1000 as starting address
    // num = *ptr; ptr = ptr+1;
    // ptr = 1004, *ptr = 20, num = 10
    num = *ptr++;
    printf("ptr = %p\t*ptr = %d\tnum = %d\n", ptr, *ptr, num);

    // ptr = ptr+1; num = *ptr;
    // ptr = 1008, *ptr = 30, num = 30
    num = *++ptr;
    printf("ptr = %p\t*ptr = %d\tnum = %d\n", ptr, *ptr, num);

    // *ptr = *ptr+1; num = *ptr;
    // ptr = 1008, *ptr = 31, num = 31
    num = ++*ptr;
    printf("ptr = %p\t*ptr = %d\tnum = %d\n", ptr, *ptr, num);

    // num = *ptr; *ptr = *ptr+1;
    // ptr = 1008, *ptr = 32, num = 31
    num = (*ptr)++;
    printf("ptr = %p\t*ptr = %d\tnum = %d\n", ptr, *ptr, num);

    return 0;
}
