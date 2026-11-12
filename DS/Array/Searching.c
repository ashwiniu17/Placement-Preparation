# include <stdio.h>
int main ()
{
    int a[5]={10,20,30,40,50};
    int i;
    int key = 50;
    int found=0;
    for(int i=0; i<5 ; i++){
        if (a[i]==key){
            printf("Element found at index %d" ,i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Element not found");
    }
    return 0;
}