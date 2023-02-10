// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(int arr,int n){
//     vector<int>ans;
//     for(int i=0;i<n;i++){
//         int cnt=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]==arr[i]){
//                 cnt++;
//             }
//         }

//         if(cnt>(n/3)){
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
// }

// int main(){
//     int arr={1,2,2,3,2};
//     vector<int> majority;
//     majority=majorityElement(arr,5);
//     set<int>s(majority.begin(),majority.end());
//     for(auto it: s){
//         cout<<it<<" ";
//     }
// }

//better
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(int arr[],int n){
//     unordered_map<int,int>mp;
//     vector<int>ans;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
//     for(auto x: mp){
//         if(x.second>(n/3))
//         ans.push_back(x.first);
//     }
//     return ans;
// }

// int main(){
//     int arr[]={1,2,2,3,2};
//     vector<int> majority;
//     majority=majorityElement(arr,5);
//     cout<<"The majority element is: ";
//     for(auto it: majority){
//         cout<<it<<" ";
//     }
// }

// best
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(int nums[],int n){
    int sz=n;
    int num1=-1,num2=-1,count1=0,count2=0,i;
    for(int i=0;i<sz;i++){
        if(nums[i]==num1)
            count1++;
        else if(nums[i==num2])
            count2++;
        else if(count1==0){
            num1=nums[i];
            count1=1;
        }
        else if(count2==0){
            num2=nums[i];
            count2=1;
        }else{
            count1--;
            count2--;
        }
    }
    vector <int> ans;
    count1=count2=0;
    for(int i=0;i<sz;i++){
        if(nums[i]==num1)
            count1++;
        else if(nums[i]==num2)
            count2++;
    }
    if(count1>sz/3){
        ans.push_back(num1);
    }
    if(count2>sz/3){
        ans.push_back(num2);
    }
    return ans;
}

int main(){
    int arr[]={1,2,2,3,2};
    vector<int>majority;
    majority=majorityElement(arr,5);
    cout<<"The majority element is ";

    for(auto it: majority){
        cout<<it<<" ";
    }
}