// C program to understand indirection operator

// System header
#include <stdio.h>

// Main
int main(void)
{
    int   i = 10;
    char  c = 'a';
    float f = 3.14;

    // Declaring and initializing pointers
    int   *iptr = &i;
    char  *cptr = &c;
    float *fptr = &f;

    // Printing addresses and values of variables
    printf("Address of i = %p, Value of i = %d\n", &i, i);
    printf("Address of c = %p, Value of c = %c\n", &c, c);
    printf("Address of f = %p, Value of f = %f\n", &f, f);

    // Indirection operator '*' is used to dereference pointer variables
    // Note that the addresses in above block and this block are same
    // Pointer is a variable that stores memory address of another variable
    printf("Vaule of iptr = %p, Value at iptr = %d\n", iptr, *iptr);
    printf("Vaule of cptr = %p, Value at cptr = %c\n", cptr, *cptr);
    printf("Vaule of fptr = %p, Value at fptr = %f\n", fptr, *fptr);

    return 0;
}
