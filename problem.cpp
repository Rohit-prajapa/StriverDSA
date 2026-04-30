#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age : ";
    cin>>age;

    if(age>=57){
        cout<<"retirement time";
    }
    else if(age>=55){
        cout<<"elisible for job but retirement soon";
    }
    else if(age>=18){
        cout<<"elisible for job";
    }
    else{
        cout<<"not elisible for job";
    }
}