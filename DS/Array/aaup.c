//accessing array using pointers
#include <stdio.h>

int main()
{
    int arr[4] = {10, 20, 30, 40};

    int *p = arr;

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}