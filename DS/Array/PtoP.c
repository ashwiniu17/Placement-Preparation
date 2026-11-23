//Pointer to Pointer
#include <stdio.h>
int main()
{
    int x;
    int *p3,**p2,***p1;
    p3=&x;
    p2=&p3;
    p1=&p2;

    printf("Enter the value of x:");
    scanf("%d",**p1);

    printf("\nthe value of p3 = %d", *p3);
    printf("\nthe value of p2 = %d", **p2);
    printf("\nthe value of p1 = %d", ***p1);

    return 0;

}