#include <bits/stdc++.h>
using namespace std;
#include <vector>;

vector<int> twoSum(vector<int>& nums, int target) {

    	vector<int> res,store;
    	store = nums;

    	sort(store.begin(), store.end());

    	int left=0,right=nums.size()-1;
    	int n1,n2;

    	while(left<right){
        	if(store[left]+store[right]==target){

            	n1 = store[left];
            	n2 = store[right];

            	break;

        	}
        	else if(store[left]+store[right]>target)
            	    right--;
        	else
            	    left++;
    	}

    	for(int i=0;i<nums.size();++i){

        	if(nums[i]==n1)
            	    res.emplace_back(i);
        	else if(nums[i]==n2)
            	    res.emplace_back(i);
    	}

    	    return res;
	}

int main() {
    vector<int> arr = {1, 4, 45, 6, 10, -8};
    int sum = 16;
    
    return 0;
}
