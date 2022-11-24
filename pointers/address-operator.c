// C program to understand the address operator

// System header
#include <stdio.h>  // printf

// Main
int main()
{
    // Declaring and initializing variables
    int i = 10;
    char ch = 'a';
    float f = 3.141;
    double d = 22;
    int arr[] = {10, 20};
    char str[] = "hello";

    // Address operator '&' returns the address of a variable
    // Format specifier '%p' used to print addresses
    // Printing addresses
    printf("%p\n", &i);     // 45a0 4-bytes 45a0 45a1 45a2 45a3
    printf("%p\n", &ch);    // 459f 1-byte  459f
    printf("%p\n", &f);     // 45a4 4-bytes 45a4 45a5 45a6 45a7
    printf("%p\n", &d);     // 45a8 8-bytes 45a8 45a9 45aa 45ab 45ac 45ad 45ae 45af
    printf("%p\n", arr);    // 45b0 2-bytes 45b0 45b1
    printf("%p\n", str);    // 45b4 5-bytes 45b4 45b5 45b6 45b7 45b8

    return 0;
}
