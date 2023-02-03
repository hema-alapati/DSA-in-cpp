// #include <bits/stdc++.h>
// using namespace std;

// void countSort(int arr[],int n,int k){
//     int count[n+1];
//     for(int i=0;i<k;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         count[arr[i]]++;
//     }
//     int missing=0;
//     int repeating=0;
//     for(int i=0;i<k;i++){
//         if(count[i]==0){
//             missing=i;
//         }
//         if(count[i]==2){
//             repeating=i;
//         }
//     }
//     cout<<"Missing: "<<missing<<endl;
//     cout<<"Repeating: "<<repeating<<endl;
// }


// int maximum(int arr[],int n){
//     int m=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>m){
//             m=arr[i];
//         }
//     }
//     return m;
// }

// int main(){
//     int arr[]={3,1,2,5,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=maximum(arr,n)+1;
//     countSort(arr,n,k);
//     return 0;
// }