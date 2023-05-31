//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
//this is the optimal solution and it takes o(n) time complexity. The brute force solution taking o(n^2) tc is yet to be implemented. 
//logic for brute force solution:
//iterate the array, for every element i, use min(left max, right max) - height(or array)[i]



long long trappingWater(int arr[], int n){
        int left=0,right=n-1;
        int leftMax=0,rightMax=0;
        long long ans=0;
        while(left<=right){
            if(arr[left]<=arr[right]){
                if(arr[left]>leftMax) leftMax=arr[left];
                else ans+=leftMax-arr[left];
                ++left; //this isn't working if I take left++, figure out why
            }
            else{
                if(arr[right]>rightMax) rightMax=arr[right];
                else ans+=rightMax-arr[right];
                --right;
            }
        }
        return ans;
    }

//note/intuition:
//in bruteforce we are taking min(leftmax,rightmax)-arr[i]
//but here we are either taking leftmax or rightmax. how it is working is: we are taking condition if arr[left]<=arr[right](line 13) 
//from that we can make sure that there is atleast one element on the right which is greater or equal to this, which means we can store water
//on this block equals to leftmax-it's height. because right cannot be lower than this. 
