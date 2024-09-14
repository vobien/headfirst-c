#include <stdio.h>

int main()
{

    // there is no variable a stord in memory
    // a ~ array of 10 integers in stack
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%p\n", a);

    int *p = a;
    printf("%p\n", p);

    return 0;
}