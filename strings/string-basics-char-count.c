/* 
 * Description: C program to count number of time a character present in string.
 *
 * Info:
 *  If we scan a character after scanning a string or an integer, gcc compiler
 *  creates some buffer which leads to in/out problem. Hence it will not wait
 *  for scanning a character. To overcome this, we need to keep a space before
 *  format specifier.
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    char str[32];
    char ch;
    int  count = 0;
    int  indx;

    printf ("Enter a string: ");
    scanf ("%s", str);

    printf ("Enter a character: ");
    scanf (" %c", &ch);

    for (indx=0; str[indx]; indx++)
        if (str[indx] == ch)
		count++;

    printf ("\nNumber of times character '%c' presents in string \"%s\" = %d\n",
        ch, str, count);

    return 0;
}
