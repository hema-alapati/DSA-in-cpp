// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

int findPlatform(int arr[], int dep[], int n) //arrival, departure time of trains
    {
        //sorting both the arrays, use merge sort for nlogn instead of n^2 time complexity
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(dep[i]>dep[j]){
                    int temp=dep[i];
                    dep[i]=dep[j];
                    dep[j]=temp;
                }
            }
        }
        
        int count=1, ans=1;
        int i=1,j=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                count++; //increasing the platforms required
                i++; // checking for next train
                ans=max(ans,count);
            }
            else if(arr[i]>dep[j]){
                count--; //since a train left before another train arrived, one platform will be empty
                j++; //incrementing the pointer on departure train array to keep track of when the next train left 
            }
            if(count>ans){
                ans=count;
            }
        }
        
        return ans;
