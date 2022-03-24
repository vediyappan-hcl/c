/* Description: C program to illustrate user defined strcpy()
 *
 * Info:
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    char src[16];
    char dest[16];
    int  indx;

    printf ("enter string: ");
    scanf("%s", src);

    printf("source string = \t%s\n", src);

    for (indx=0; src[indx]; indx++)
        dest[indx] = src[indx];
    // copy terminating byte '\0' as well
    dest[indx] = src[indx];
    //dest[indx] = '\0';

    printf ("destination string = \t%s\n", dest);

    return 0;
}
