// C program to print structure members

// System headers
#include <stdio.h>  // printf
#include <string.h> // strcpy

// defining structure
struct st
{
    int     i;
    char    ch;
    float   f;
    int     arr[5];
    char    str[10];
    float   farr[5];
};
int main(void)
{
    struct st s1;
    int    i;

    // Initializing structure members
    s1.i = 10;
    s1.ch = 'a';
    s1.f = 3.141;
    for(i=0; i<5; i++)
    {
        s1.arr[i] = i+10;
    }
    strcpy(s1.str, "Vediyappan");
    for(i=0; i<5; i++)
    {
        s1.farr[i] = i+100;
    }

    // Printing structure members
    printf("s1.i = %d\ns1.ch = %c\ns1.f = %f\n", s1.i, s1.ch, s1.f);
    for(i=0; i<5; i++)
    {
        printf("s1.arr[%d] = %d ", i, s1.arr[i]);
    }
    printf("\n");
    printf("s1.str = %s\n", s1.str);
    for(i=0; i<5; i++)
    {
	printf("s1.farr[%d] = %f ", i, s1.farr[i]);
    }
    printf("\n");

    return 0;
}
