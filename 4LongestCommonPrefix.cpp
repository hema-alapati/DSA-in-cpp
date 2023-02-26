#include <bits/stdc++.h>

int findMinLen(string arr[],int n){
    int min=arr[0].length();
    for(int i=1;i<n;i++){
        if(arr[i].length()<min){
            min=arr[i].length();
        }
    }
    return(min);
}

string commonPrefix(string arr[],int n){
    int minlen=findMinLen(arr,n);
    for(int i=0;i<minlen;i++){
        current=arr[0][i];
        for(int j=1;j<n;j++){
            if(arr[j][i]!=current){
                return result;
            }
        }
        result.push_back(current);
    }
    return result;
}

int main(){
    string arr[]={"geeksforgeeks", "geeks", "geek", "geezer"};
    int n=sizeof(arr)/sizeof(arr[0]);
    string ans=commonPrefix(arr,n);
    if(ans.length()) cout<<"The longst common prefix is: "<<ans;
    else cout<<"There's no lcp "<<endl;
    return 0;
}