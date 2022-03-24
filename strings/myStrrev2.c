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
    char temp;
    int  i;
    int  j;

    printf("enter string: ");
    scanf("%s", src);

    printf ("source string = \t%s\n", src);

    for (i=0; src[i]; i++);

    for (j=0, i=i-1; i>j; j++, i--)
    {
	temp = src[i];
	src[i] = src[j];
	src[j] = temp;
    }

    printf ("source string = \t%s\n", src);

    return 0;
}
