// C program to pass a pointer containing function's address as an argument

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
    void (*fp)(char);

    fp = print_char;

    // Passing function pointer as an argument
    func(10, fp);

    return 0;
}
