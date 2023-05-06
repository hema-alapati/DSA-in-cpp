// optimal
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n=5;
  int arr[]={1,2,3,5};
  int sum=0; int arrSum=0;
  for(int i=0;i<n-1;i++){
    arrSum+=arr[i];
  }
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  cout<<sum-arrSum;
}

// bf using arrays
int main(){
  int n=6;
  int arr[]={1,2,3,5,6};
  int v[n+1];
  for(int i=0;i<n+1;i++){
    v[i]=i+1;
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n;j++){
      if(arr[i]==v[j]){
        v[j]=-1;
        break;
      }
    }
  }
  for(int i=0;i<n;i++){
    if(v[i]!=-1){
      cout<<v[i];
      //return i+1; //this isn't returning anything
    }
  }
  return 0;
}


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// bf using vectors //geoffrey's
int main() {
    vector<int> arr = {1,2,3,5,6};
    int n = 6;
    
    vector<int> v(n);
    
    iota(v.begin(), v.end(), 1); //Iota fills the array like 1 2 3 4 5
    
    for(auto i: arr) { // - n
        for(auto &j: v) { // - n
            if(i == j) {
                j = -1;
                break;
            }
        }
    }
    
    for(auto i:v) {
        if(i!=-1) {
            cout << i << endl;
        }
    }
    
    return 0;
}


