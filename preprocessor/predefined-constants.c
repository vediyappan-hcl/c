/*******************************************************************************
@desc C program to print the values of predefined constants.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    printf("Date = %s\n", __DATE__);
    printf("Time = %s\n", __TIME__);
    printf("File = %s\n", __FILE__);
    printf("Line = %d\n", __LINE__);
    return 0;
}
