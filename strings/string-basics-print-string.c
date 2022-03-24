/*
 * Description: C program to illustrate printing strings
 *
 * Info:
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    char str[10];
    int  indx;

    printf ("Enter string: ");
    scanf ("%s", str);

    printf ("str   = %s\n", str);
    printf ("str+1 = %s\n", str+1);

    // Printing character by character - it includes invalid characters as well
    printf ("\n");
    for (indx=0; indx<10; indx++)
        printf ("str[%d] = %c\n", indx, str[indx]);
    printf ("\n");

    // Printing character by character - only valid characters
    // Method 1
    for (indx=0; str[indx]!='\0'; indx++)
        printf ("str[%d] = %c\n", indx, str[indx]);
    printf ("\n");
    // Method 2
    for (indx=0; str[indx]; indx++)
        printf ("str[%d] = %c\n", indx, str[indx]);
    printf ("\n");

    return 0;
}
