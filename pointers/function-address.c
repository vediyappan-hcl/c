// C program to understand that every function has an address and how to access
// that address

// System header
#include <stdio.h>  // printf

// func
void func()
{
    printf("%s: Address of func() = %p\n", __func__, func);
}

// Main
int main(void)
{
    printf("%s: Address of main() = %p\n", __func__, main);
    printf("%s: Address of func() = %p\n", __func__, func);

    func();

    return 0;
}

