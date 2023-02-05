#include <bits/stdc++.h>
using namespace std;

int findMajority(vector<int>&arr,int n){
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count1++;
        }
        else if(arr[1]==2){
            count2++;
        }
        else if(arr[1]==3){
            count3++;
        }
        if(count1>=n/2){
            return 1;
        }
        else if(count2>=n/2){
            return 2;
        }
        else if(count3>=n/2){
            return 3;
        }
        else{
            return -1;
        }
    }
}

int majorityElement(vector<int>&arr){
    int count=0;
    int element=0;
    for(int i: arr){
        if(count==0){
            element=i;
        }
        if(element==i){
            count++;
        }else count--;
    }
    return element;
}


int main(){
    vector<int>arr={2,2,1,1,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findMajority(arr,n);
    cout<<endl;
    cout<<majorityElement(arr);
    return 0;
}