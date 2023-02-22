#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        a++;
    }
    cout<<a<<endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the values of a and b";
    cin>>a>>b;
    while(b!=0){
        a++;b--;
    }
    cout<<a<<endl;
}
//using bit shifting
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //a stores sum, b stores carry
    while(b!=0){
        unsigned carry=a&b;
        a=a^b;
        b=carry<<1;
    }
    cout<<a;
    return 0;
}