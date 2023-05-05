vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>v;
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            first=i;
            break;
        }
    }
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            last=i;
        }
    }
    v.push_back(first);
    v.push_back(last);
    return v;
}