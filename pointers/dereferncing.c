// c program for dereferening pointer variables  

#include <stdio.h>
int main()
{
    // declaring variables
    int i = 10;
    char ch = 'a';
    float f = 3.141;

    // declaring pointer variables
    int *ip;
    char *cp;
    float *fp;

    // initializing pointers
    ip = &i;
    cp = &ch;
    fp = &f;

    // dereferencing pointers
    printf("%d %c %f\n", *ip, *cp, *fp);

    return 0;
}
