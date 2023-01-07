#include <bits/stdc++.h>
using namespace std;

void some(int arr[],int n){
    arr[0]+=100;
    cout<<"value inside function "<<arr[0]<<endl;
}

int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    some(arr,n);
    return 0;
}