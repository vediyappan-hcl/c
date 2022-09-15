/*******************************************************************************
C program to allocate dynamic memory using calloc.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO
#include <stdlib.h> // Dynamic memory allocation

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int *piVar;
    int  iNum;
    int  i;

    printf("Enter the number of integers to be entered: ");
    scanf("%d", &iNum);

    // Allocate dynamic memory
    // piVar points to the allocated memory
    piVar = (int *)calloc(iNum, sizeof(int));
    if (NULL == piVar)
    {
        printf("Memory is not available\n");
        exit(1);
    }

    // Just to check the difference between malloc and calloc
    // Memory is initialized with 0
    printf("Integers = ");
    for (i = 0; i < iNum; i++)
    {
        // Write formatted output to stdout
        printf("%d ", *(piVar+i));
    }
    printf("\n");

    for (i = 0; i < iNum; i++)
    {
        printf("Enter an integer: ");
        // Read formatted input from stdin and write into memory
        scanf("%d", piVar+i);
    }

    printf("Integers = ");
    for (i = 0; i < iNum; i++)
    {
        // Write formatted output to stdout
        printf("%d ", *(piVar+i));
    }
    printf("\n");

    // Free up the memory once it's usage is over
    free(piVar);

    return 0;
}
