/*******************************************************************************
C program to illustrate reading multiple variables.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int     iRollNo;
    char   *sName;
    float   fMarks;

    // Write a string
    printf("Enter roll number, name and marks: ");
    // Read roll number, name, marks
    // Values can be seperated with whitespace, tab or newline (default)
    scanf("%d%s%f", &iRollNo, sName, &fMarks);

    printf("Roll Number = %d\nName = %s\nMarks = %f\n", iRollNo, sName, fMarks);

    return 0;
}
