/*******************************************************************************
C program to illustrate escape sequences.
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
    printf("Enter roll number: ");
    // Read roll number    
    scanf("%d", &iRollNo);

    printf("Enter name: ");
    // Read name
    scanf("%s", sName);

    printf("Enter marks: ");
    // Read marks
    scanf("%f", &fMarks);

    // '\t' moves the cursor to the next tab
    printf("\\t --- Roll number = %d\tName = %s\tMarks = %f\n", iRollNo, sName, fMarks);
    // '\b' moves the cursor one position back
    printf("\\b --- Roll number = %d\bName = %s\bMarks = %f\n", iRollNo, sName, fMarks);
    // '\r' moves the cursor to the beginning of the current line
    printf("\\r --- Roll number = %d\rName = %s\rMarks = %f\n", iRollNo, sName, fMarks);
    // '\a' alerts the user by a beep sound
    printf("\\a --- Roll number = %d\aName = %s\aMarks = %f\n", iRollNo, sName, fMarks);
    // '\v' moves the cursor to the next vertical tab position
    printf("\\v --- Roll number = %d\vName = %s\vMarks = %f\n", iRollNo, sName, fMarks);
    // '\f' moves the cursor to the next page
    printf("\\f --- Roll number = %d\fName = %s\fMarks = %f\n", iRollNo, sName, fMarks);

    return 0;
}
