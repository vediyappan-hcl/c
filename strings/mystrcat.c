/* 
 * Description: C program to illustrate user-defined strcat().
 *
 * Info:
 *  Format specifier %s will not scan the strings with spaces. To overcome this
 *  we can use format specifier as %[^\n]
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    char str1[32];
    char str2[32];
    int  indx1;
    int  indx2;

    printf ("Enter string 1: ");
    scanf ("%[^\n]", str1);

    printf ("Enter string 2: ");
    scanf (" %[^\n]", str2);

    for (indx1=0; str1[indx1]; indx1++);
    for (indx2=0; str2[indx2]; indx2++)
        str1[indx1++] = str2[indx2];
    str1[indx1] = '\0';

    printf ("\nConcatinated string = %s\n", str1);

    return 0;
}
