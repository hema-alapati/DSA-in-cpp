#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArray(int (&arr1)[], int (&arr2)[], int n1, int n2) {
    vector<int> v;
    for (int i = 0; i < n1; i++) {
        v.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; i++) {
        v.push_back(arr2[i]);
    }
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i]>v[j]){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    int k=0;
    while(k!=n1){
        arr1[k]=v[k];
        k++;
    }
    int l=0;
    while(k!=n1+n2){
        arr2[l]=v[k];
        k++;
        l++;
    }
    
    
    
    return v;
}

int main() {
    int n1, n2;
    int arr1[] = {1, 4, 7, 8, 10};
    n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 9};
    n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> a = mergeArray(arr1, arr2, n1, n2);
    // for (auto i : a) {
    //     cout << i << " ";
    // }
    
    cout<<"Elements of 1st array are: ";
    for(int i = 0; i<n1; i++) {
        cout << arr1[i] << " " ;
    }
    cout<<"\nElements of 2nd array are: ";
    for(int i = 0; i<n2; i++) {
        cout << arr2[i] << " " ;
    }
    
    cout<<endl;
    return 0;
}


// C++ program to merge two sorted arrays/
#include<bits/stdc++.h>
using namespace std;
 
void mergeArrays(int arr1[], int arr2[], int n1,
                            int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
      // traverse the arr1 and insert its element in arr3
      while(i < n1){
      arr3[k++] = arr1[i++];
    }
       
      // now traverse arr2 and insert in arr3
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
       
      // sort the whole array arr3
      sort(arr3, arr3+n1+n2); //for sorting arrays
}
 
// Driver code
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    int arr3[n1+n2]; //creating array of size n1+n2 and passing it to function
    mergeArrays(arr1, arr2, n1, n2, arr3);
 
    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
 
    return 0;
}
