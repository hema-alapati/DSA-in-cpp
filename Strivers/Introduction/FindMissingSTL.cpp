#include <bits/stdc++.h>
using namespace std;

vector<int> missingRepeating(vector<int> array){
    int n=array.size()+1;
    vector<int> substitute(n,0);
    vector<int> ans;

    for(int i=0;i<array.size();i++){
        substitute[array[i]]++;
    }

    for(int i=1;i<=array.size();i++){
        if(substitute[i]==0||substitute[i]>1){
            ans.push_back(i);
        }
    }
    return ans;
}

void printVector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> arr={4,2,4,5,2,3,1};
    missingRepeating(vector<int>arr);
    printVector(vector<int>arr);
}