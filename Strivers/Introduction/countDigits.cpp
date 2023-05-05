#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int count=0;
    int temp=n;
    while(n>0){
        a=n%10;
        if(a!=0){
            if(temp%a==0){
                count++;
            }
            n/=10;
        }
    }
    cout<<count;
    return 0;
}