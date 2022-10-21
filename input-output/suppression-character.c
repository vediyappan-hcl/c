/*******************************************************************************
C program to illustrate suppression character in scanf.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int  iDate;
    int  iMonth;
    int  iYear;

    printf("Enter Date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &iDate, &iMonth, &iYear);

    printf("Date = %d\n", iDate);
    printf("Month = %d\n", iMonth);
    printf("Year = %d\n", iYear);

    return 0;
}
