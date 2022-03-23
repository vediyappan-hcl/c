/*
 *  Description: C program to illustrate difference between string size and length.
 *
 *  Info:
 *   1. Size of string is number of bytes reserved by compiler.
 *   2. Length of string is number of valid characters excluding '\0'.
 *
 *  Author: Vediyappan Villali
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "hello";

    printf("Size of string = %ld\n", sizeof(str));
    
    printf("Length of string = %ld\n", strlen(str));

    return 0;
}
