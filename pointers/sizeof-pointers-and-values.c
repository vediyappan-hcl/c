// C program to understand the size of pointer variables and size of values
// dereferenced by them.

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

    // Printing size of pointers and values derefenced by them
    printf("sizeof(cptr) = %lu, sizeof(*cptr) = %lu\n", sizeof(cptr), sizeof(*cptr));
    printf("sizeof(iptr) = %lu, sizeof(*iptr) = %lu\n", sizeof(cptr), sizeof(*iptr));
    printf("sizeof(fptr) = %lu, sizeof(*fptr) = %lu\n", sizeof(cptr), sizeof(*fptr));
    printf("sizeof(dptr) = %lu, sizeof(*dptr) = %lu\n", sizeof(cptr), sizeof(*dptr));
 
    return 0;
}
