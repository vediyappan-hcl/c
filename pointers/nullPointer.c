/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 *
 * Filename:    nullPointer.c
 * Description: C program to illustrate null pointer
 * Author:      Vediyappan V.
 * Date:        27-Nov-2021
 *
 * Brief: 
 *  - A null pointer is a pointer which points nothing.
 *  - Dereferencing null pointer will create segmentation fault.
 *
 * Uses:
 *  - Used to initialize a pointer when it is not assigned with any valid memory
 *    address yet.
 *  - Used to perform error handling in pointer related code by checking null
 *    pointer. e.g., dereference pointer variable only if it is not a NULL.
 *  - Used to pass a null pointer to a function when we do not want to pass any
 *    valid memory address.
 *
 * -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring null pointer
    int *ptr = NULL;

    // checking null pointer - commenting this block may cause program crash
    if (ptr == NULL)
    {
        printf("ptr is NULL\n");
	exit(1);
    }
    
    // dereferencing null pointer
    printf("dereferenced value = %d\n", *ptr);

    return 0;
}
