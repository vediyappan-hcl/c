// c program to find the size of the structure

#include <stdio.h>
struct st
{
    int     i;
    char    ch;
    float   f;
};
int main()
{
    struct  st s1;
    printf("size of structure = %d\n", sizeof(s1));
    return 0;
}
