/*******************************************************************************
@desc C program to understand macros with arguments.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Macros with arguments
// It is just replacement of text, hence the arguments can be of any data type
#define SUM(x,y)   ((x)+(y))
#define PROD(x,y)  ((x)*(y))

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 10;
    int iNum2 = 20;
    int iSum;
    int iProd;
    float   fNum1 = 2.2;
    float   fNum2 = 5.4;
    float   fSum;
    float   fProd;
    
    // Passing integer data type to macro
    iSum  = SUM(iNum1,iNum2);
    iProd = PROD(iNum1,iNum2);
    printf("Sum = %d Product = %d\n", iSum, iProd);

    // Passing float data type to macro
    fSum  = SUM(fNum1,fNum2);
    fProd = PROD(fNum1,fNum2);
    printf("Sum = %.1f Product = %.1f\n", fSum, fProd);

    // Passing mixed data type to macro
    fSum  = SUM(iNum1,fNum2);
    fProd = PROD(fNum1,iNum2);
    printf("Sum = %.2f Product = %.2f\n", fSum, fProd);

    return 0;
}
