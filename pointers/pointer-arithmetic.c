// C program to understand pointer arithmetic.

// System header    // printf
#include <stdio.h>

// Main()
int main(void)
{
    char   c = 'a';
    int    i = 10;
    float  f = 3.141;
    double d = 3.141;

    // Declaring and initializing pointers
    char   *cptr = &c;
    int    *iptr = &i;
    float  *fptr = &f;
    double *dptr = &d;

    // Printing addresses
    printf("Address of cptr iptr fptr dptr = %p %p %p %p\n", cptr, iptr, fptr, dptr);

    // Incrementing pointers
    cptr++;
    iptr++;
    fptr++;
    dptr++;
 
    // Printing addresses
    printf("Address of cptr iptr fptr dptr = %p %p %p %p\n", cptr, iptr, fptr, dptr);
 
    return 0;
}
