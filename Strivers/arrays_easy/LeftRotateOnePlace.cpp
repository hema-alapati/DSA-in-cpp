// #include <bits/stdc++.h>

// using namespace std;
// void solve(int arr[],int n){
//     int temp[n];
//     for(int i=1;i<n;i++){
//         temp[i-1]=arr[i];
//     }
//     temp[n-1]=arr[0];
//     for(int i=0;i<n;i++){
//         cout<<temp[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n=5;
//     int arr[]={1,2,3,4,5};
//     solve(arr,n);
//     return 0;
// }

//betterone

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main() {
  int n=5;
  
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
}