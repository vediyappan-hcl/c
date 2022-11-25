// C program to find the size of the structure

// System header
#include <stdio.h>  // printf

// Defining structure
struct st
{
    int   i;
    char  ch;
    float f;
};
int main(void)
{
    // Declaring structure variable
    struct st s1;

    // Printing size of structure
    printf("size of structure = %lu\n", sizeof(s1));

    return 0;
}
