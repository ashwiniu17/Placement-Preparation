//nested if else

#include <bits/stdc++.h>
using namespace std;
int main (){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age < 18){
        cout<<"Not eligible for job";
    }
    else if( age<=57){
        cout<<"Eligibele for job";
     if(age>=55)
        cout<<"elgibel for the job but retirement soon";
    }
    else{
        cout<<"go sit and chill";
    }
    return 0;
}