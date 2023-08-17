#include <stdio.h>

#define NAME "apple"

int main(void)
{
    char str[10] = {NAME};
    char str2[10] = "hello";

    printf("NAME = %s\n", NAME);
    printf("str = %s\n", str);
    printf("str2  = %s\n", str2);

    return 0;
}
