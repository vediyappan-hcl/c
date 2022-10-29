/*******************************************************************************
@desc C program to understand the use of #line directive.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    printf("%s:%d\n", __FILE__, __LINE__);

    // Usage: #line <decimal-constant> <string-constant>
    #line 16 "line-directive.c"
    printf("%s:%d\n", __FILE__, __LINE__);

    #line 19 __FILE__
    printf("%s:%d\n", __FILE__, __LINE__);

    return 0;
}
