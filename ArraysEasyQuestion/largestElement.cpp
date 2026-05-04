#include<iostream>
#include <climits>
using namespace std;
void printmx(int arr[], int n){
    int mx=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>mx) mx=arr[i];
    }
    int smx=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>smx && arr[i]!=mx) smx=arr[i];
    }

    cout<<smx;
}

int main(){
    int n;
    cout<<"enter the number of element: ";
    cin>>n;

    int arr[n];
    cout<<"enter the Arrays element element : ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printmx(arr,n);
}