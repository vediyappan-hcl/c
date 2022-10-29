/*******************************************************************************
@desc C program to understand token pasting operator.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Token pasting operator ## used to concatenate two tokens into a single token
#define PASTE(x,y) x##y
#define MARKS(subject) iMarks_##subject

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iSub1 = 60;
    int iSub2 = 75;
    int iMarks_maths = 100;
    int iMarks_physics = 99;

    printf("%d %d\n", PASTE(iSub,1), PASTE(iSub,2));
    printf("%d %d\n", MARKS(maths), MARKS(physics));

    return 0;
}
