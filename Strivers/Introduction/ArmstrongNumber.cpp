#include <bits/stdc++.h>
using namespace std;

bool an(int n){
    int org=n;
    int temp=n;
    int count=0;
    while(temp!=0){
        count++;
        temp/=10;
    }
    int val=0;
    while(n!=0){
        int rem=n%10;
        val+=pow(rem,count);
        n/=10;
    }
    return(org==val);
}

int main(){
    int num;
    cin>>num;
    if(an(num)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}