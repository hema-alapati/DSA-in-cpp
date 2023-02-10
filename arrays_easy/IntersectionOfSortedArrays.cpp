#include <bits/stdc++.h>
using namespace std;
// 1) Use two index variables i and j, initial values i = 0, j = 0 
// 2) If arr1[i] is smaller than arr2[j] then increment i. 
// 3) If arr1[i] is greater than arr2[j] then increment j. 
// 4) If both are same then print any of them and increment both i and j.

void printIntersection(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m&&j<n){
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else{
            cout<<arr2[j]<<" ";
            i++,j++;
        }
    }
}

int main(){
    int arr1[]={};
    int arr2[]={};

    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    
    printIntersection(arr1,arr2,m,n);
    return 0;
}