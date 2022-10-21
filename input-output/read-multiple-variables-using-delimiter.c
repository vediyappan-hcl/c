/*******************************************************************************
C program to illustrate reading multiple variables using delimiter.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int     iDate;
    int     iMonth;
    int     iYear;
    float   fSalary;

    // Write a string
    printf("Enter date (dd-mm-yy): ");
    scanf("%d-%d-%d", &iDate, &iMonth, &iYear);
    printf("Enter salary ($<amount>): ");
    scanf(" $%f", &fSalary);

    printf("Date = %d-%d-%d\n", iDate, iMonth, iYear);
    printf("Salary = $%f\n", fSalary);

    return 0;
}
