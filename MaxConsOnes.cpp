#include <bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    int maxi=0;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>maxi){
                maxi=count;
            }
        }
        else{
            count=0;
        }
    }

    cout<<"result is:"<<maxi;
    return 0;
}