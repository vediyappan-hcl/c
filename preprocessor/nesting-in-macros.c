/*******************************************************************************
@desc C program to understand nesting in macros.
*******************************************************************************/

// System headers
#include <stdio.h>  // printf

// Macros with arguments
#define ISNUM(c)      (c>=48 && c<=57)
#define ISUPPER(c)    (c>=65 && c<=90)
#define ISLOWER(c)    (c>=97 && c<=122)

// Nesting in macros
#define ISALPHA(c)    ISLOWER(c) || ISUPPER(c)
#define ISALPHANUM(c) ISALPHA(c) || ISNUM(c)

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    char chVar;

    // Read the input character
    printf("Enter a character (A-Z or a-z) or number (0-9): ");
    scanf("%c", &chVar);

    // Nested macro
    if(ISALPHANUM(chVar))
        printf("%c is an alphanumeric character\n", chVar);
    else
        printf("%c is not an alphanumberic character\n", chVar);

    return 0;
}
