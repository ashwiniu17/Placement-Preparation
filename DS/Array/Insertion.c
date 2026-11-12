#include <stdio.h>

int main()
{
    int a[10]={10,20,30,40};
    int n = 4 , pos = 2 , value = 25;

    for (int i=n; i>pos ; i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=value;
    n++ ;

    for (int i=0 ; i<n ;i++){
        printf("%d ",a[i]);
    }
    return 0;
}