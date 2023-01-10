#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=n;
    int revNum=0;
    while(n!=0){
        int digit=n%10;
        revNum=revNum*10+digit;
        n=n/10;
    }
    cout<<revNum;
    return 0;
}