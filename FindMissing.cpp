#include <bits/stdc++.h>
using namespace std;
 
int getMissingNo(int arr[],int n){
    int N=n+1;
    int total=(N*(N+1))/2;
    for(int i=0;i<n;i++){
        total-=arr[i];
    }
    return total;
}

int main()
{
    int arr[] = { 1, 2, 3, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, N);
    cout << miss;
    return 0;
}
 