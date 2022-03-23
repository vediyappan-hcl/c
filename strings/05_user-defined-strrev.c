/* 
 * Description: C program to illustrate reversing strings
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
    int  sIndx;
    int  dIndx;

    printf("enter string: ");
    scanf("%s", src);

    for (sIndx=0; src[sIndx]; sIndx++);

    for (dIndx=0, sIndx=sIndx-1; sIndx>=0; dIndx++, sIndx--)
	dest[dIndx] = src[sIndx];
    dest[dIndx] = '\0';

    printf ("source string = \t%s\n", src);
    printf ("destination string = \t%s\n", dest);

    return 0;
}
