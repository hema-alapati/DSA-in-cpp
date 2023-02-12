#include<bits/stdc++.h>
using namespace std;

int main(){
        int arr[]= {2,3,7,10,13,14,17};
        int k = 14;
        int n=6;
        int start=0,end=n;
        int mid,loc=-1;
        while(start<=n-1){
            mid=(start+end)/2;
            if(arr[mid]<k){
                start=mid+1;
            }
            else if(arr[mid]>k){
                end=mid-1;
            }
            if(arr[mid]==k){
                loc=mid;
                break;
            }
        }
        if(loc==-1){
            cout<<"Element not found"<<endl;
        }
        else{
            cout<<"Element "<<k<<" Found at "<<loc<<" index";
        }
}

//using recursion
// #include <bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[],int start,int end,int k){
//     if(start>end){
//         return -1;
//     }
//     int mid=(start+end)/2;
//     if(k==arr[mid]){
//         return mid;
//     }
//     else if(k>arr[mid]){
//         return binarySearch(arr,mid+1,end,k);
//     }
//     else if(k<arr[mid]){
//         return binarySearch(arr,start,mid-1,k);
//     }
// }

// int main(){
//     int arr[]={2,3,7,10,13,14,17};
//     int k=14;
//     int start=0;
//     int end=6;
//     int loc=binarySearch(arr,start,end,k);
//     if(loc==-1){
//         cout<<"Element not found"<<endl;
//     }
//     else{
//         cout<<"Element "<<k<<" Found at "<<loc<<" index";
//     }
// }