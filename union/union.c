/*******************************************************************************
@desc C program to illustrate the usage of union
*******************************************************************************/

// System headers
#include <stdio.h>  // printf
#include <string.h> // strcpy

// Defining union
union uEmployee
{
    char    sEmpName[16];
    int     iEmpId;
    float   fEmpSalary;
};

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    // Declaring union variable
    union uEmployee uEmp;

    // Acessing first member
    strcpy(uEmp.sEmpName, "Vediyappan");
    printf("Employee Name = %s\n", uEmp.sEmpName);
    // Only one member can be used at a time
    // See unexpected values on uncommenting the following lines
    // printf("Employee ID = %d\n", uEmp.iEmpId);
    // printf("Employee Salary = %f\n", uEmp.fEmpSalary);

    // Accessing second member
    uEmp.iEmpId = 1054;
    printf("Employee ID = %d\n", uEmp.iEmpId);
    // printf("Employee Name = %s\n", uEmp.sEmpName);
    // printf("Employee Salary = %f\n", uEmp.fEmpSalary);

    // Accessing third member
    uEmp.fEmpSalary = 1000;
    printf("Employee Salary = %f\n", uEmp.fEmpSalary);
    // printf("Employee Name = %s\n", uEmp.sEmpName);
    // printf("Employee ID = %d\n", uEmp.iEmpId);

    return 0;
}
