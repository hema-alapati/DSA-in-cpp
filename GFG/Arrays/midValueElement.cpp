
int findElement(int arr[], int n) {
    int leftMax[n];
    int rightMin[n];
    leftMax[0]=arr[0];
    rightMin[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rightMin[i]=min(rightMin[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if(leftMax[i]<=arr[i] && arr[i]<=rightMin[i]){
            return arr[i];
        }
    }
    return -1;
}
