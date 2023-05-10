#include <bits/stdc++.h>
using namespace std;

int countPairs(int m,int n,vector<int>v1,vector<int>v2){
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(pow(v1[i],v2[j])>pow(v2[j],v1[i])){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int m=3,n=2;
    vector<int> v1{2,1,6};
    vector<int> v2{1,5};
    cout<<countPairs(m,n,v1,v2);
    return 0;
}
