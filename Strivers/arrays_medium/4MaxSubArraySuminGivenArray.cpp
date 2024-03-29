// #include <bits/stdc++.h>
// using namespace std;


// int maxSubArray(vector<int>&nums,vector<int>&subarray){
//     int max_sum=INT_MIN;
//     int n=nums.size();
//     if(n==1){
//         return nums[0];
//     }
//     int i,j;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum=sum+nums[k];
//             }
//             if(sum>max_sum){
//                 subarray.clear();
//                 max_sum=sum;
//                 subarray.push_back(i);
//                 subarray.push_back(j);
//             }
//         }
//     }
//     return max_sum;
// }

// int main(){
//     vector<int>arr{-2,-1,-3,4,-1,2,1,-5,4};
//     vector <int> subarray;
//     int lon=maxSubArray(arr,subarray);
//     cout<<lon<<endl;
//     for(int i=subarray[0];i<=subarray[1];i++){
//         cout<<arr[i]<<" ";
//     }
// }


//better
// #include<bits/stdc++.h>
// using namespace std;

// int maxSubArray(vector<int>&nums,vector<int>&subarray){
//     int max_sum=INT_MIN;
//     for(int i=0;i<nums.size();i++){
//         int curr_sum=0;
//         for(int j=i;j<nums.size();j++){
//             curr_sum+=nums[j];
//             if(curr_sum>max_sum){
//                 subarray.clear();
//                 max_sum=curr_sum;
//                 subarray.push_back(i);
//                 subarray.push_back(j);
//             }
//         }
//     }
//     return max_sum;
// }

// int main() {
//   vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
//   vector < int > subarray;
//   int lon = maxSubArray(arr, subarray);
//   cout << "The longest subarray with maximum sum is " << lon << endl;
//   cout << "The subarray is " << endl;
//   for (int i = subarray[0]; i <= subarray[1]; i++) {
//     cout << arr[i] << " ";
//   }

// }


//linear time complexity
#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>&nums,vector<int>&subarray){
    int msf=INT_MIN, meh=0;
    int s=0;
    for(int i=0;i<nums.size();i++){
        meh+=nums[i];
        if(meh>msf){
            msf=meh;
            subarray.clear();
            subarray.push_back(s);
            subarray.push_back(i);
        }
        if(meh<0){
            meh=0;
            s=i+1;
        }

        return msf;
    }
}

int main() {
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    vector < int > subarray;
    int lon = maxSubArray(arr, subarray);
    cout << "The longest subarray with maximum sum is " << lon << endl;
    cout << "The subarray is " << endl;
    for (int i = subarray[0]; i <= subarray[1]; i++) {
        cout << arr[i] << " ";
    }

}