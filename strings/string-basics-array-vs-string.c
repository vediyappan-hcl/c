/*
 * Description: C program to illustrate differences between arrays and strings.
 *
 * Info:
 *
 * Author: Vediyappan Villali
 */

#include <stdio.h>

int main()
{
    char arr[] = {'a', 'b', 'c'};
    char str[] = "abc";
    
    // Here we can store up to 10 bytes
    char newArr[10] = {'a', 'b', 'c'};
    // Here we can store only 9 bytes, last byte reserved for '\0'
    char newStr[10] = "abc";

    printf("Size of array = %ld\n", sizeof (arr));
    printf("Size of string = %ld\n", sizeof (str));

    printf("Size of new array = %ld\n", sizeof (newArr));
    printf("Size of new string = %ld\n", sizeof (newStr));

    return 0;
}
