#include <bits/stdc++.h>
using namespace std;


void subArrWithSumK(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
    }
}

int main(){
    int arr[]={1, 9, 3, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    subArrWithSumK(arr,n,k);
    return 0;
}