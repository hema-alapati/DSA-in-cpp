#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArray(int arr1[], int arr2[], int n1, int n2) {
    vector<int> v;
    for (int i = 0; i < n1; i++) {
        v.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; i++) {
        v.push_back(arr2[i]);
    }
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i]>v[j]){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    return v;
}

int main() {
    int n1, n2;
    int arr1[] = {1, 4, 7, 8, 10};
    n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 9};
    n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> a = mergeArray(arr1, arr2, n1, n2);
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}
