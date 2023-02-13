//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        int low = 0, high=n-1, mid;
        if(k<=arr[0]) return 0;
        if(k>arr[n-1]) return n;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(k==arr[mid]) return mid;
            else if(k>arr[mid]) low = mid+1;
            else high = mid-1;
        }
        if(arr[mid]<k) return mid+1;
        return mid;
    }
};