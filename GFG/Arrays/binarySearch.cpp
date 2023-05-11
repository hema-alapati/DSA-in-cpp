#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end + 1) / 2;
        if (k == arr[mid])
            return mid;
        else if (k > arr[mid])
            start = mid + 1;
        else if (k < arr[mid])
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};
    int k = 30;
    cout << "The index of k is: " << binarySearch(arr, n, k);
    return 0;
}
