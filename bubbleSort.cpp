#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={1,6,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    return 0;
}