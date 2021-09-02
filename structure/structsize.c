// c program to find the size of the structure

#include <stdio.h>

// defining structure
struct st
{
    int     i;
    char    ch;
    float   f;
};
int main()
{
    // declaring structure variable
    struct  st s1;

    // printing size of structure
    printf("size of structure = %d\n", sizeof(s1));
    return 0;
}
