// C++ program to count number of substrings with
// exactly k distinct characters in a given string

//brute force O(n*n)
#include<bits/stdc++.h>
using namespace std;
int countkDist(string str,int k){
    int n=strlen(str);
    int cnt
    //str.size(),str.length(),sizeof try out with these
    for(int i=0;i<n;i++){
        int dist_count=0;
        memset(cnt,0,sizeof(cnt));
        for(int j=i;j<n;j++){
            if(cnt[str[j]-'a']==0){
                dist_count++;
            }
            cnt[str[j]-'a']++;
            if(dist_count==k){
                res++;
            }
            if(dist_count>k) break;
        }
    }
    return res;
}

int main(){
    string str="abcbaa";
    int k=3;
    cout<<"Total substrings with exactly "<<k<<countkDist(str,k)<<endl;
    return 0;
}