#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int>&arr,int n){
    int minIndex=0;
    	int maxIndex=n-1;
    	int maxValue=arr[n-1]+1;
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        arr[i]=((arr[maxIndex]%maxValue)*maxValue)+arr[i];
    	        maxIndex--;
    	    }
    	    else{
    	        arr[i]=((arr[minIndex]%maxValue)*maxValue)+arr[i];
    	        minIndex++;
    	    }
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]/=maxValue;
    	}
}

int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
