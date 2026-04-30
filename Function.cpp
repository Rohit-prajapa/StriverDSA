#include<iostream>
using namespace std;
void printName(){
    cout<<"rohit";
}
void sum(int a, int b){
    cout<<"sum is :"<<a+b<<" ";
}
int main(){
    // printName(); 
    int a;
    cout<<"enter the 1st number :";
    cin>>a;

    int b;
    cout<<"enter the 2nd number ";
    cin>>b;

    sum(a,b);
}