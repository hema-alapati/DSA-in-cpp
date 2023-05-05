#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
int count_Triplets(int A[], int N){
     int count = 0;
     sort(A, A + N);
     for(int i = 0; i < N; i++){
       for(int j = i + 1; j < N; j++){
          for(int k = j + 1; k < N; k++){
              if(A[i] + A[j] == A[k]){
                    count++;
              }
          }
       }
     }
  return count; 
}
int countTripletOptimal(int arr[], int n)
	{
	    int l,r,count=0;
	    sort(arr,arr+n);
	    for(int i=n-1;i>=0;i--){
	        l=0,r=i-1;
	        while(l<r){
    	        if(arr[l]+arr[r]==arr[i]){
    	            count++;
    	            l++;
    	            r--;
    	        }
    	        else if(arr[l]+arr[r]<arr[i]){
    	            l++;
    	        }
    	        else{
    	            r--;
    	        }
	        }
	    }
	    return count;
	}
 
int main() {
// 	int A[] = {1, 2, 3, 4, 5};
// 	int N = 5;
    int N;
    cout<<"Enter the number of elements in array: "<<endl;
    cin>>N;
    int A[N];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
	cout << count_Triplets(A, N)<<endl;
    cout << countTripletOptimal(A, N);
	return 0;
}
