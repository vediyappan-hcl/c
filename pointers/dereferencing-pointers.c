// C program to understand dereferencing pointer variables

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
    printf("Address of i = %p\tValue of iptr = %p\n", &i, iptr);
    printf("Address of c = %p\tValue of cptr = %p\n", &c, cptr);
    printf("Address of f = %p\tValue of fptr = %p\n", &f, fptr);

    // Indirection operator '*' is used to dereference pointer variables
    // Note that the addresses in above block and this block are same
    // Pointer is a variable that stores memory address of another variable
    // Indirection operator '*' is also called as dereference operator
    printf("Vaule of i = %d\t\tValue at address of i = %d\t\tValue at iptr = %d\n",
            i, *(&i), *iptr);
    printf("Vaule of c = %c\t\tValue at address of c = %c\t\tValue at cptr = %c\n",
            c, *(&c), *cptr);
    printf("Vaule of f = %f\tValue at address of f = %f\tValue at fptr = %f\n",
            f, *(&f), *fptr);

    // Printing addresses of pointer variables
    printf("Address of iptr = %p\n", &iptr);
    printf("Address of cptr = %p\n", &cptr);
    printf("Address of fptr = %p\n", &fptr);

    return 0;
}
