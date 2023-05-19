#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    cout << arr[k - 1];
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> v;
    int k;
    cout << "Kth smallest, enter k: ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    kthSmallest(v, n, k);
    return 0;
}
