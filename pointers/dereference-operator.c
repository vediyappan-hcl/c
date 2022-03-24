/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *
 * Filename:    dereferenceOperator.c
 * Description: C program to illustrate dereference operator
 * Author:      Vediyappan V.
 * Date:        27-Nov-2021
 *
 * Brief: 
 *  - Dereferencing a pointer means getting the value that is stored in the
 *    memory location pointed by the pointer.
 *  - The operator * is used to dereference, known as dereference operator.  

 * -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */ 

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
