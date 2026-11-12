//Array insertion
#include <stdio.h>
int main(){
    int arr[10]={10,20,30,40};
    int i , n=4  ,pos =2 , value=25;
    for( i=n-1; i>=pos ; i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n++;
    printf("Array after insertion: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}