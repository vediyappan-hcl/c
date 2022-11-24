// C program to understand pointer arithmetic with prefix and postfix operators

// System header    // printf
#include <stdio.h>

// Main()
int main(void)
{
    int i = 10;

    // Declaring and initializing pointer
    int *ptr = &i;

    // Printing addresses
    printf("Address of   ptr   = %p\n", ptr);
    printf("Address of ++ptr   = %p\n", ++ptr);
    printf("Address of   ptr++ = %p\n", ptr++);
    printf("Address of   ptr   = %p\n", ptr);
    printf("Address of --ptr   = %p\n", --ptr);
    printf("Address of   ptr-- = %p\n", ptr--);
    printf("Address of   ptr   = %p\n", ptr);

    return 0;
}
