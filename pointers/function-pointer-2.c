// C program to send a function's address as an argument ot other function

// System headers
#include <stdio.h>  // printf

void print_char(char ch)
{
    printf("%s: ch = %c\n", __func__, ch);
}

void func(int num, void (*fp)(char))
{
    printf("%s: num = %d\n", __func__, num);

    (*fp)('a');
}

// Main
int main(void)
{
    // Passing function name as argument
    func(10, print_char);

    return 0;
}
