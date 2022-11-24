// C program to understand the difference between normal way of accessing
// variable and using pointer

// System headers
#include <stdio.h>

// Main
int main(void)
{
    int   i = 10;
    char  c;
    int  *iptr = &i;
    char *cptr = &c;

    // Normal way of accessing variables
    printf("i = %d\n", i);
    i++;
    printf("i++ = %d\n", i);
    printf("i+5 = %d\n", i+5);
    printf("Enter value of c: ");
    scanf(" %c", &c);
    printf("Value of c = %c\n", c);

    // Resetting value to 10, just to compare the results
    i = 10;

    // Accessing variables using pointers
    printf("*iptr = %d\n", *iptr);
    (*iptr)++;
    printf("(*iptr)++ = %d\n", *iptr);
    printf("(*iptr)+5 = %d\n", (*iptr)+5);
    printf("Enter value of ch: ");
    scanf(" %c", cptr);
    printf("Value at cptr = %c\n", *cptr);

    return 0;
}
