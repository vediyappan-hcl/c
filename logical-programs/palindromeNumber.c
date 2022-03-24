/*
 * C program to find given number is a palindrome number or not.
 *
 * Palindrome number a number that remains the same when its digits are reversed.
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    int num;
    int rem;
    int sum = 0;
    int rev;
    int orgNum;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    orgNum = num;

    while (num)
    {
        rem = num % 10;
        sum = (sum*10) + rem;
        num = num / 10;
    }

    printf ("\nNumber: \t%d\nSum: \t\t%d\n", orgNum, sum);

    if (orgNum == sum)
        printf ("\n%d is a palindrome number\n", orgNum);
    else
        printf ("\n%d is a not a palindrome number\n", orgNum);

    return 0;
}
