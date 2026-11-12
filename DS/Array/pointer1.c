#include <stdio.h>

int main() {
    int a = 20;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d\n", *p);

    return 0;
}