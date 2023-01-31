// #include <bits/stdc++.h>
// using namespace std;

// int sortArr(vector <int> &arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }

// int main(){
//     vector <int> arr1={2,5,1,3,0};
//     vector <int> arr2={8,10,5,7,9};

//     cout<<"The largest element in the array is: "<<sortArr(arr1)<<endl;
//     cout<<"The largest element in the array is: "<<sortArr(arr2)<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int findLargestElement(int arr[],int n){
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int arr1[]={2,5,1,3,0};
//     int n=5;
//     int max=findLargestElement(arr1,n);
//     cout<<"The largest element in the array is: "<<max<<endl;

//     int arr2[]={8,10,5,7,9};
//     n=5;
//     max=findLargestElement(arr2,n);
//     cout<<"The largest element in the array is: "<<max<<endl;
//     return 0;
// }

//second largest element in an array without sorting
// #include <bits/stdc++.h>
// using namespace std;

// void getElements(int arr[],int n){
//     if(n==0||n==1)
//         cout<<-1<<" "<<-1<<endl; //edge case when only one element is present in array or no elements are present
//     int small=INT_MAX,second_small=INT_MAX;
//     int large=INT_MIN,second_large=INT_MIN;
//     int i;
//     for(int i=0;i<n;i++){
//         small=min(small,arr[i]);
//         large=max(large,arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]<second_small&&arr[i]!=small){
//             second_small=arr[i];
//         }
//         if(arr[i]>second_large&&arr[i]!=large){
//             second_large=arr[i];
//         }
//     }
//     cout<<"Second smallest is "<<second_small<<endl;
//     cout<<"Second largest is "<<second_large<<endl;
// }

// int main(){
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int secondSmallest(int arr[],int n){
//     if(n<2)
//         return -1;
//     int small=INT_MAX;
//     int second_small=INT_MAX;
//     int i;
//     for(i=0;i<n;i++){
//         if(arr[i]<small){
//             second_small=small;
//             small=arr[i];
//         }
//         else if(arr[i]<second_small&&arr[i]!=small){
//             second_small=arr[i];
//         }
//     }
//     return second_small;
// }

// int secondLargest(int arr[],int n){
//     if(n<2)
//         return -1;
//     int large=INT_MIN,second_large=INT_MIN;
//     int i;
//     for(i=0;i<n;i++){
//         if(arr[i]>large){
//             second_large=large;
//             large=arr[i];
//         }
//         else if(arr[i]>second_large&&arr[i]!=large){
//             second_large=arr[i];
//         }
//     }
//     return second_large;
// }

// int main(){
//     int arr[]={1,2,4,7,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int ss=secondSmallest(arr,n);
//     int sl=secondLargest(arr,n);

//     cout<<"Second smallest is "<<ss<<endl;
//     cout<<"Second largest is "<<sl<<endl;
//     return 0;
// }

//checking if the array is sorted
// #include <bits/stdc++.h>
// using namespace std;

// bool isSorted(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i])
//                 return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int arr[]={1,2,3,4,5},n=5;
//     bool ans=isSorted(arr,n);
//     if(ans) cout<<"True"<<endl;
//     else cout<<"False"<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// bool isSorted(int arr[],int n){
//     for(int i=1;i<n;i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int arr[]={1,2,3,4,5},n=5;
//     printf("%s",isSorted(arr,n)?"True":"False");
//     return 0;
// }
