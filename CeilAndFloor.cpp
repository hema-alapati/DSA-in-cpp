#include <bits/stdc++.h>
using namespace std;


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int fl=-1,cl=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cl=min(cl,arr[i]);
        }
        else if(arr[i]<x){
            fl=max(fl,arr[i]);
        }  
    }
    if(cl==INT_MAX){
        return {fl,-1};
    }
    return{fl,cl};
}

int main(){
    int arr[]={5,6,8,9,6,5,5,6};
    auto ans=getFloorAndCeil(arr,8,7);
    cout<<ans.first<<" "<<ans.second<<"\n";
    return 0;
}