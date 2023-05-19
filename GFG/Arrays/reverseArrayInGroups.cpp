#include <iostream>
#include <vector>
using namespace std;

void reverseInGroups(vector<long long> &arr, int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int start = i;
        int end = min(i + k - 1, n - 1);
        while (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

void reverseInGroups1(vector<long long> &arr, int n, int k){
  int i=0;
        while(i<n){
            int j=min(i+k,n);
            reverse(arr.begin()+i,arr.begin()+j);
            i+=k;
        }
}
void reverseInGroups2(vector<long long>& vec, int n, int k){
    if(k>=n)reverse(vec.begin(),vec.end());
    else
	for(int i=0;i<n;i+=k)
		if(i<=n-k)
		reverse(vec.begin()+i,vec.begin()+i+k);
		else reverse(vec.begin()+i,vec.end());
    }

int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    vector<long long> v1;
    cout << "Enter (partition)K: ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    reverseInGroups(v1, n, k);
//     reverseInGroups1(v1, n, k);
//     reverseInGroups2(v1, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}
