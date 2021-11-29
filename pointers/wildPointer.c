/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *
 * Filename:    wildPointer.c
 * Description: C program to illustrate wild pointer
 * Author:      Vediyappan V.
 * Date:        27-Nov-2021
 *
 * Brief: 
 *  - An uninitialized pointer is also known as wild pointer which points to
 *    random memory location.
 *  - Dereferencing wild pointer may cause undefined behavior or crash. e.g.,
 *    segmentation fault.
 *
 * Recommendations:
 *  - Always remember to initialize the pointer(s).
 *  - Avoid dereferencing uninitialized/wild pointer(s).
 *  - Dereference pointers only which are initialized properly.
 *
 * -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    
    // declaring wild pointer
    int *ptr;

    // assigning value to wild pointer
    *ptr = 20;

    // dereferencing wild pointer
    printf("value after dereferencing wild pointer = %d\n", *ptr);

    // initializing pointer - uncomment below line to avoid program crash
    // ptr = &i;

    // displaying value of i
    printf("value of i = %d, *ptr = %d\n", i, *ptr);

    // indirectly modifying value of i
    *ptr = 30;

    // displaying modified value of i
    printf("modfied value of i = %d, *ptr = %d\n", i, *ptr);

    return 0;
}
