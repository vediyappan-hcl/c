/*******************************************************************************
C program to reallocate dynamic memory using realloc.
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
    int  iNewNum;
    int  i;

    printf("Enter the number of integers to be entered: ");
    scanf("%d", &iNum);

    // Allocate dynamic memory
    // piVar points to the allocated memory
    piVar = (int *)malloc(iNum * sizeof(int));
    if (NULL == piVar)
    {
        printf("Memory is not available\n");
        exit(1);
    }

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

    printf("Enter the new number of integers to be entered: ");
    scanf("%d", &iNewNum);

    // Increase or decrease the memory allocated by malloc or calloc
    piVar = (int *)realloc(piVar, iNewNum * sizeof(int)); 
    if (NULL == piVar)
    {
        printf("Memory is not available\n");
        exit(1);
    }

    if(iNewNum <= iNum)
    {
        goto label;
    }

    for (i = iNum; i < iNewNum; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", piVar+i);
    }

label:
    printf("Integers = ");
    for (i = 0; i < iNewNum; i++)
    {
        // Write formatted output to stdout
        printf("%d ", *(piVar+i));
    }
    printf("\n");

    // Free up the memory once it's usage is over
    free(piVar);

    return 0;
}
