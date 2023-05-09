#include <bits/stdc++.h>
using namespace std;

void arrangeAlt(vector<int> &v1){
    vector<int>temp(v1.size());
    int low=0, high=v1.size()-1;
    int flag=1;
    for(int i=0;i<v1.size();i++){
        if(flag){
            temp[i]=v1[high];
            high--;
        }
        else{
            temp[i]=v1[low];
            low++;
        }
        flag=!flag;
    }
    for(int i=0;i<v1.size();i++){
        v1[i]=temp[i];
    }
}
void printVector(vector<int>tempV){
    for(int i=0;i<tempV.size();i++){
		cout<<tempV[i]<<" ";
	}
}
int main(){
    // vector<int> v{1,2,3,4,5,6};
    int n;
    cout<<"size of array please: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    arrangeAlt(v);
    printVector(v);
    return 0;
}
