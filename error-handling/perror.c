/*******************************************************************************
@desc C program to illustrate perror.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf, perror

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    FILE *fp = NULL;

    fp = fopen ("sample.txt", "r");
    if (fp == NULL)
    {
        // perror prints the string passed to it, followed by a colon, a space,
        // and then the textual representation of the current errno value
        // Here, it prints "No such file or directory" error if "sample.txt"
        // doesn't present in present working directory
        perror("fopen");
        return -1;
    }
    else
    {
        // Prints "Success" if file opened successfully
        perror("fopen");
    }

    return 0;
}
