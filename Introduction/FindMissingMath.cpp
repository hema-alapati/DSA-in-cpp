#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[],int n){
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    return m;
}

void findMissing(int arr[],int n){
    int l=maximum(arr,n);
    int s=(l*(l+1))/2;
    int p=(l*(l+1)*(2*l+1))/6;
    int missing=0,repeating=0;
    for(int i=0;i<n;i++){
        s-=arr[i];
        p-=arr[i]*arr[i];
    }
    missing=(s+(p/s))/2;
    repeating=missing-s;
    cout<<"Missing: "<<missing<<endl;
    cout<<"Repeating: "<<repeating<<endl;
}

int main(){
    int arr[]={2,4,1,3,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    findMissing(arr,n);
}