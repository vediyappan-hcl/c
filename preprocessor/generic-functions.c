/*******************************************************************************
@desc C program to understand generic functions.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Generic function
#define MAX(FNAME, DTYPE)                   \
            DTYPE FNAME(DTYPE X, DTYPE Y)   \
            {                               \
                return X>Y ? X : Y;         \
            }         
MAX(max_int, int)
MAX(max_float, float)
MAX(max_double, double)

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    printf("%d\n", max_int(3,5));
    printf("%.2f\n", max_float(7.4,5.7));
    printf("%.2lf\n", max_double(22.7, 13.14));

    return 0;
}
