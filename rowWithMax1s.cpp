#include <bits/stdc++.h>
#include <vector>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr,int n,int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                return j;
            }
        }
    }
    return -1;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    auto ans=rowWithMax1s(arr,n,m);
    cout<<ans<<endl;
    return 0;
}