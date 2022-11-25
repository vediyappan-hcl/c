// C program to assign a structure variable to another structure variable

// System header
#include <stdio.h>  // printf

struct employee
{
    char  name[16];
    int   id;
    float salary;
};

// Main
int main(void)
{
    struct employee emp1 = {"Vediyappan", 12345, 1000};
    struct employee emp2;

    // Assigning structure variable emp1 to structure variable emp2
    // See to that both variables are of same structure type
    emp2 = emp1;

    printf("emp1 = %s %d %.2f\n", emp1.name, emp1.id, emp1.salary);
    printf("emp2 = %s %d %.2f\n", emp2.name, emp2.id, emp2.salary);
    
    return 0;
}
