/*******************************************************************************
@desc C program to illustrate errno.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf, fopen
#include <errno.h>  // errno

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    FILE *fp = NULL;

    fp = fopen ("sample.txt", "r");
    if (fp == NULL)
    {
        // errno is a global variable indicating the error occurred during any
        // function call and defined in the header file errno.h. For example,
        // #define	ENOENT 2	/* No such file or directory */
        printf("Value of errno = %d\n", errno);
        return -1;
    }

    return 0;
}
