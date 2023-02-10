#include <bits/stdc++.h>
using namespace std;

int main(){
    int choice;
    cin>>choice;
    if(choice==1){
        double radius;
        cin>>radius;
        cout<<(3.14)*(radius*radius);
    }
    else if(choice==2){
        double l,b;
        cin>>l>>b;
        cout<<2*l*b;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
}