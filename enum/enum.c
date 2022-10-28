/*******************************************************************************
@desc C program to illustrate the usage of enum
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Defining enum
enum eDays
{
    // Automatically assigned integer values beginning from 0, 1, 2,...
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    // Declaring enum variable
    enum eDays eDay;

    // Assigning enumerator (integer constants) to enum variable
    eDay = WEDNESDAY;
    printf("Day = %d\n", eDay);

    // Re-assigning enumerator with another value
    eDay = SATURDAY;
    printf("Day = %d\n", eDay);

    return 0;
}
