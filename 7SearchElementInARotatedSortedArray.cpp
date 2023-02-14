//bruteforce
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&nums,int target){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target)
            return i;
    }
    return -1;
}

int main(){
    vector<int> nums{4,5,6,7,0,1,2,3};
    int target=3;
    cout<<search(nums,target);
    return 0;
}


//efficient
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>&nums,int target){
    int low=0, high=nums.size()-1,mid;
    mid=(low+high)>>1;
    while(low<high){
        if(target==mid){
            return nums[mid];
        }
        if(nums[low]<=nums[mid]){
            if((nums[low]<=target)&&nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else if(nums[mid]<=nums[high]){
            if((nums[mid]<=target)&&(nums[high]>target)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int>nums{4,5,6,7,0,1,2,3};
    int target=3;
    cout<<search(nums,target);
    return 0;
}