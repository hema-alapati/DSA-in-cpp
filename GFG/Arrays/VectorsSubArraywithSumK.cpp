#include <bits/stdc++.h>
using namespace std;

vector<int>subarraySum(vector<int>arr,int n,long long s){
        long long sum=0;
        vector<int> vect;
        for(int i=0;i<n;i++){
            sum=arr[i];
            for(int j=i+1;j<=n;j++){
                if( sum == s){
                    vect.push_back(i+1);
                    vect.push_back(j);
                    return vect;
                }
                if( sum>s || j==n ) break;
                sum=sum+arr[j];
            }
        }
        vect.push_back(-1);
        return vect;
}

int main(){
    vector<int> vect1;
    int n;
    long long s;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter the sum: "<<endl;
    cin>>s;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vect1.push_back(temp);
    }
    vector<int> result;
    result=subarraySum(vect1,n,s);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
