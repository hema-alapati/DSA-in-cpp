#include<bits/stdc++.h>

using namespace std;
int longestSubArrWithSumK_BF(int arr[],int n,int k){
    int maxLength=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k)
                maxLength=max(maxLength,j-i+1);
        }
    }
    return maxLength;
}

int main(){
    int arr[]={2,3,5,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=longestSubArrWithSumK_BF(arr,n,5);
    cout<<k;
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int longestSubArrWithSumK_Optimal(int arr[], int n, int k){
    int start=0, end=-1, sum=0, maxLength=0;
    while(start<n){
        while((end+1<n)&&(sum+arr[end+1]<=k))
            sum+=arr[++end];
        if(sum==k)
            maxLength=max(maxLength,(end-start+1));
        sum-=arr[start];
        start++;
    }
    return maxLength;
}

int main() {

  int arr[] = {7,1,6,0};
  int n = sizeof(arr) / sizeof(arr[0]), k = 7;

  cout << "Length of the longest subarray with sum K is " << 
  longestSubArrWithSumK_Optimal(arr, n, k);

  return 0;
}