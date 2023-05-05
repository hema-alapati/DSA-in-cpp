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
        maxSum=max(maxSum,sum);
        sum=max(sum,0);
//         if(sum<0){
//             sum=0;
//         }
//         if(sum>maxSum) maxSum=sum;
    }
    return maxSum;
}

//for returning those indices
void subArraySumK(int arr[], int n, int sum)
{
    int currentSum, i, j;
    for (i = 0; i < n; i++) {
        currentSum = arr[i];
        for (j = i + 1; j <= n; j++) {
            if (currentSum == sum) {
                cout << " and it is found between indexes " << i<< " and " << j - 1 << endl;
                return;
            }
            if (currentSum > sum || j == n)
                break;
            currentSum = currentSum + arr[j];
        }
    }
    cout << "No subarray found";
    return;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(int);
    int val2=maxSumFromSubArray(arr,n);
    cout<<val2<<endl;
//     cout<<maxSumOptimal(arr,n);
    int val=maxSumOptimal(arr,n);
    cout<<"The maximum sum is: "<<val;
    subArraySumK(arr,n,val);
    return 0;
}
