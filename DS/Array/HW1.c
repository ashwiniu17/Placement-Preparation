
/*1.Print all elements of an array: 5, 10, 15, 20, 25.

#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i ;
    for(i=0; i<5; i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
*/


/*2.Insert 35 at index 2 in: 10, 20, 30, 40.
#include <stdio.h>
int main()
{ 
    int a[5]={10,20,30,40};
    int i;
    int n=4 ,pos=2,value=35;
    for( i=n ; i>pos ; i-- ){
        a[i]=a[i-1];
    }
    a[pos]=value;
    n++;
    for(int i = 0 ; i<n ;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
*/


/*3.Delete the element at index 1 from: 10, 20, 30, 40.
#include <stdio.h>
int main(){
    int a[5]={10, 20, 30, 40};
   int i ;int n=4 ; int pos = 1 ;
    for ( i=pos ; i<n-1 ; i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0 ;i<n ; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
*/

/*4.Search for 30 in: 10, 20, 30, 40, 50.
#include <stdio.h>
int main(){
    int a[6]={10, 20, 30, 40, 50};
    int i ; int key= 30 ; int found =0 ;
    for (i=0;i<5;i++){
        if(a[i]==key){
            printf("Element found at index %d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found");
    }
    return 0;
}
*/

/*5.Sort these elements in ascending order: 40, 10, 30, 20.
#include <stdio.h>
int main(){
    int arr[4]={40, 10, 30, 20};
    int i,j;
    int temp;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<4;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
 */

 
//6.Merge A = {1, 2, 3} and B = {4, 5, 6}.
#include <stdio.h>
int main(){
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[6];
    for (int i=0 ;i<3 ;i++){
        c[i]=a[i];
    }
    for (int i=0 ;i<3 ;i++){
        c[i+3]=b[i];
    }
    for (int i=0 ;i<6 ;i++){
        printf("%d ",c[i]);
    }
    return 0;
}