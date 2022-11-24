// C program to understand the void pointer

// System header
#include <stdio.h>

// Main
int main(void)
{
    int   i = 5;
    float f = 3.14;
    char  ch = 'a';
    void *vp;

    vp = &i;
    // Void pointer can't be dereferenced simply by using indirection operator
    // Before dereferencing, it should be type cast to appropriate pointer type
    // Left most asterisk is the indirection operator
    // (int *) is used for typecasting
    printf("i = %d\n", *(int *)vp);

    vp = &f;
    printf("f = %f\n", *(float *)vp);

    vp = &ch;
    printf("ch = %c\n", *(char *)vp);

    return 0;
}

