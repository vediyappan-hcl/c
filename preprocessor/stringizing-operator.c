/*******************************************************************************
@desc C program to understand stringizing operator.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// # is stringizing operator, causes the argument it precedes to be turned into a string
// # stringizes a macro argument
// #VAR --- iVar or chVar or fVar or iVar*fVar
#define SHOW(VAR, FORMAT) printf(#VAR" = %"#FORMAT"\n", VAR)

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int     iVar  = 10;
    char    chVar = 'a';
    float   fVar  = 22.7;

    SHOW(iVar, d);
    SHOW(chVar, c);
    SHOW(fVar, 0.2f);
    SHOW(iVar*fVar, 0.2f);

    return 0;
}
