// c program for wild pointer - uninitialized pointer

#include <stdio.h>
int main()
{
    // declaring wild pointer
    int *ptr;
    
    // dereferencing wild pointer
    printf("%d\n", *ptr);

    return 0;
}
