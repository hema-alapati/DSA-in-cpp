#include<bits/stdc++.h>
using namespace std;

void zerosToEnd(int arr[],int n){
    int temp[n], k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[k]=arr[i];
            k++;
        }
    }
    while(k<n){
        temp[k]=0;
        k++;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

int main() {
    int arr[] ={ 1,2,0,1,0,4,0};
    zerosToEnd(arr,7);
}

//optimal approach
#include<bits/stdc++.h>

using namespace std;
void zerosToEnd(int arr[], int n){
    //finding first occ of 0
    int k=0;
    while(k<n){
        if(arr[k]==0) break;
        else k++;
    }

    int i=k,j=k+1;
    while(i<n&&j<n){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
}

int main() {
  int arr[] ={ 1,2,0,1,0,4,0};
  zerosToEnd(arr, 7);
}