#include <stdio.h>

int main(){
    int a[5]={40,10,50,20,30};
    int i;
    int temp;
    for(i =0 ;i<5-1 ;i++)
    {
        for (int j=0 ;j<5-1 ;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    for(i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}