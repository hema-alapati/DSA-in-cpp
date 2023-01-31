#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[],int k,int n){
    int count[k]; int i,j;
    for(i=0;i<k;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<count[i];j++){
            arr[index]=i;
            index++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 4, k = 7;
    int arr[] = { 5, 6, 5, 2 };
    countSort(arr, k, n);
    return 0;
}

Efficient Approach
#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[],int k,int n){
    int count[k];
    for(int i=0;i<k;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<k;i++){
        count[i]=count[i-1]+count[i];
    }
    int res[n];
    for(int i=n-1;i>=0;i--){
        res[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=res[i];
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=4, k=7;
    int arr[]={5,6,5,2};
    countSort(arr,k,n);
    return 0;
}


//cwh_yt
// #include<stdio.h>
// #include<limits.h>
// #include<stdlib.h>

// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }


// int maximum(int A[], int n){
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (max < A[i]){
//             max = A[i];
//         }
//     }
//     return max;
    
// }
// void countSort(int * A, int n){
//     int i, j;
//     // Find the maximum element in A
//     int max = maximum(A, n); 

//     // Create the count array
//     int* count = (int *) malloc((max+1)*sizeof(int));

//     // Initialize the array elements to 0
//     for (i = 0; i < max+1; i++)
//     {
//         count[i] = 0; 
//     }

//     // Increment the corresponding index in the count array
//     for (i = 0; i < n; i++)
//     {
//         count[A[i]] = count[A[i]] + 1; 
//     }

//     i =0; // counter for count array
//     j =0; // counter for given array A

//     while(i<= max){
//         if(count[i]>0){
//             A[j] = i;
//             count[i] = count[i] - 1;
//             j++;
//         }
//         else{
//             i++;
//         }
//     } 
// }

// int main(){
//     int A[] = {9, 1, 4, 14, 4, 15, 6};
//     int n = 7;
//     printArray(A, n);
//     countSort(A, n);
//     printArray(A, n); 
//     return 0;
// }