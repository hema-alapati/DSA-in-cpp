#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,val;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>q;
    while(q--){
        cin>>val;
        if(find(v.begin(),v.end(),val)!=v.end())
            cout<<"Yes";
        else 
            cout<<"No";
    }
    return 0;
}
