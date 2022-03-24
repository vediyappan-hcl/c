/*
 * C program to find given number is a prime number or not.
 *
 * Prime number is a a number that is divisible only by itself and 1.
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    int num;
    int indx;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    for (indx=2; indx<num; indx++)
    {
        if (num%indx == 0)
	    break;
    }

    if (num == indx)
        printf ("%d is a prime number\n", num);
    else
        printf ("%d is not a prime number\n", num);

    return 0;
}
