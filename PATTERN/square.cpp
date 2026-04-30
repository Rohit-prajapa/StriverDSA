#include<iostream>
using namespace std;
void print1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    print1(n);
}