#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(int arr[],int l,int mid,int r){
        int i=l;
        int j=mid+1;
        int f=l;
        int temp[100000];

        while(i<=mid && j<=r){
            if(arr[i]<arr[j]){
                temp[f]=arr[i];
                i++;
            }
            else{
                temp[f]=arr[j];
                j++;
            }
            f++;
        }
    }
}