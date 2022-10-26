/*******************************************************************************
@desc C program to illustrate strerror.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf, fopen
#include <string.h> // strerror
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
        // strerror return string describing error number "errno" in errno.h
        // Prints "No such file or directory" error if "sample.txt" doesn't
        // present in present working directory
        printf("Error = %s\n", strerror(errno));
        return -1;
    }

    return 0;
}
