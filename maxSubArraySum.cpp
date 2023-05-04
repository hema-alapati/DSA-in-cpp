#include <iostream>
using namespace std;

int maxSumFromSubArray(int arr[],int n){
    int neededSum=1e-9;
    int sum=0;
    for(int i=0;i<n;i++){
        int iterationSum=1e-9;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum>iterationSum) iterationSum=sum;
        }
        if(iterationSum>neededSum) neededSum=iterationSum;
        sum=0;
    }
    return neededSum;
}

int maxSumOptimal(int arr[],int n){
    int maxSum=1e-9,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>maxSum) maxSum=sum;
    }
    return maxSum;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<maxSumFromSubArray(arr,n)<<endl;
    cout<<maxSumOptimal(arr,n);
    return 0;
}
