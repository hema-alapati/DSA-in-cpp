#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v{3,4,5,6,9,10,11};
    int n=v.size();
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<ceil(n/2);i++){
        v1.push_back(v[i]);
    }
    for(int i=n-1;i>=ceil(n/2);i--){
        v2.push_back(v[i]);
    }
    int k=0;
    for(int i=0;i<n;i=i+2){
        v[i]=v2[k++];
    }
    k=0;
    for(int i=1;i<n;i=i+2){
        v[i]=v1[k++];
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
