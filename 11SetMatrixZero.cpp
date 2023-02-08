#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>&arr){
    int rows=arr.size(),columns=arr[0].size();
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]==0){
                int ind=i-1;
                while(ind>=0){
                    if(arr[ind][j]!=0){
                        arr[ind][j]=-1;    
                    }
                    ind--;
                }
                ind=i+1;
                while(ind<rows){
                    if(arr[ind][j]!=0){
                        arr[ind][j]=-1;    
                    }
                    ind++;
                }
                ind=j-1;
                while(ind>=0){
                    if(arr[i][ind]!=0){
                        arr[i][ind]=-1;
                    }
                    ind--;
                }
                ind=j+1;
                while(ind<columns){
                    if(arr[i][ind]!=0){
                        arr[i][ind]=-1;
                    }
                    ind++;
                }
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]<=0){
                arr[i][j]=0;
            }
        }
    }
}

int main(){
    vector<vector<int>>arr;
    arr={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(arr);
    cout << "The Final Matrix is " << endl;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

better
#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>&arr){
    int rows=arr.size(),cols=arr[0].size();
    vector <int> d1(rows,-1),d2(cols,-1);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==0){
                d1[i]=0;
                d2[j]=0;
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(d1[i]==0||d2[j]==0){
                arr[i][j]=0;
            }
        }
    }
}


int main() {
  vector < vector < int >> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}

