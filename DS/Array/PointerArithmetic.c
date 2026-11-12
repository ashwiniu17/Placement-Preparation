#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};

    int *p = &arr[0];

    printf("Value = %d\n", *p);

    p++;

    printf("After increment = %d\n", *p);

    p--;

    printf("After decrement = %d\n", *p);

    return 0;
}