#include<iostream>
using namespace std;
void print2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
          cout<<"  ";
        }
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    print2(n);
}