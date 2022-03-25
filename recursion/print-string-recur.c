/*
 * Design a recursive function to print characters of given string.
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

void print_string (char *str);

int main()
{
    char str[16];

    printf ("Enter a string: ");
    scanf ("%s", str);
    
    print_string (str);

    printf ("\n");

    return 0;
}

void print_string (char *str)
{
    if (*str)
    {
        printf ("%c %p\n", *str, str);
	// print_string (str+1);
	print_string (str++);
	// print_string (++str);
    }
}
