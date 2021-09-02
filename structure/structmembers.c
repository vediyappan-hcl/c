// c program to print structure members

#include <stdio.h>
#include <string.h>

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
int main()
{
    // declaring structure variable
    struct st s1;

    // declaring index variable
    int    indx;

    // initializing structure members
    s1.i = 10;
    s1.ch = 'a';
    s1.f = 3.141;
    printf(" s1.i = %d\ns1.ch = %c\ns1.f = %f\n");
    for(indx=0; indx<5; indx++)
	s1.arr[indx] = indx+10;
    strcpy(s1.str, "vediyappan");
    for(indx=0; indx<5; indx++)
	s1.farr[indx] = indx+100;

    // printing structure members
    for(indx=0; indx<5; indx++)
	printf("s1.arr[%d] = %d ", indx, s1.arr[indx]);
    printf("\n");
    printf("s1.str = %s\n", s1.str);
    for(indx=0; indx<5; indx++)
	printf("s1.farr[%d] = %f ", indx, s1.farr[indx]);
    printf("\n");

    return 0;
}
