/*
 * C program to print fibonacci series.
 * 
 * Info:
 *  Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 1;
    int limit;
    int indx;
    int temp;

    printf("Enter number of elements to be printed: ");
    scanf ("%d", &limit);

    printf ("%d %d ", num1, num2);
    for (indx = 2; indx < limit; indx++)
    {
	temp = num1;
	num1 = num2;
	num2 = temp + num2;
        printf ("%d ", num2);
    }
    printf ("\n");

    return 0;
}
