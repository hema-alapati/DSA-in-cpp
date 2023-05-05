// #include <bits/stdc++.h>
// using namespace std;

// void rec_print(int n){
//     if(n==0){
//         return;
//     }
//     rec_print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     rec_print(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<"raj\n";
//     f(i+1,n);

// }

// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void f(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<" ";
//     f(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void f(int i,int n){
//     if(i<1){
//         return;
//     }
//     cout<<i<<" ";
//     f(i-1,n);

// }
// int main(){
//     int n;
//     cin>>n;
//     f(n,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//     if(i<1){
//         return;
//     }
//     f(i-1,n);
//     cout<<i<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     f(n,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i,int n){
//     if(i>n){
//         return;
//     }
//     f(i+1,n);
//     cout<<i<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     f(i-1,sum+i);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(n,0);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int f(int n){
//     if(n==0) return 0;
//     return n+f(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<f(n);
//     return 0;
// }  

// #include <bits/stdc++.h>
// using namespace std;

// int f(int n){
//     if(n==0||n==1) return n;
//     else return n*f(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<f(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void revArray(int arr[],int n){
//     int ans[n]; int k=0;
//     for(int i=n-1;i>=0;i++){
//         ans[k]=arr[i];
//         k++;
//     }
//     for(int  i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     revArray(arr,n);
//     return 0;
// }

// reversing an array
// #include <bits/stdc++.h>

// using namespace std;

// void printArray(int ans[],int n){
//     cout<<"The reversed array is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// void reverseArray(int arr[],int n){
//     int ans[n];
//     for(int i=n-1;i>=0;i--){
//         ans[n-i-1]=arr[i];
//     }
//     printArray(ans,n);
// }

// int main(){
//     int n=5;
//     int arr[]={5,4,3,2,1};
//     reverseArray(arr,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printArray(int arr[],int n){
//     cout<<"The reversed array is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void reverseArray(int arr[],int n){
//     int p1=0, p2=n-1;
//     while(p1<p2){
//         swap(arr[p1],arr[p2]);
//         p1++;p2--;
//     }
// }

// int main(){
//     int n=5;
//     int arr[]={5,4,3,2,1};
//     reverseArray(arr,n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i,int arr[],int n){
//     if(i>=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     f(0,arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool f(int i, string &s){
//     if(i>=s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return f(i+1,s);
// }
 
// int main(){
//     string s="madam";
//     cout<<f(0,s);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std; 
// int f(int n){
//     if(n<=1) return n;
//     return f(n-1)+f(n-2);
// }
// int main(){
//     cout<<f(4);
//     return 0;
// }