/*
 * Design a recursive function to find the factorial of a given number.
 *
 * Author: Vediyappan Villali
 *
 */

#include <stdio.h>

int factorial (int num);

int main()
{
    int num;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    printf ("Factorial of %d = %d\n", num, factorial (num));

    return 0;
}

int factorial (int num)
{
    if (num == 1)
	return 1;
    else
        return (num * factorial (num-1));
}
