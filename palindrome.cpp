#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    int y=0;
    while(x>0){
        int digit=x%10;
        y=y*10+digit;
        x=x/10;
    }
    return y;
}

int main(){
    int x;
    cin>>x;
    int y=reverse(x);
    if(x==y){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}