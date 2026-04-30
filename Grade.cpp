#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the marks of student : ";
    cin>>n;

    if(n>=80 && n<=100){
        cout<<"A"<<endl;
    }
    else if(n>=60){
        cout<<"B"<<endl;
    }
    else if(n>=50){
        cout<<"C"<<endl;
    }
    else if(n>=45){
        cout<<"D"<<endl;
    }
    else if(n>=25){
        cout<<"E"<<endl;
    }
    else{
        cout<<"fail";
    }
}