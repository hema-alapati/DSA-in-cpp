//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
//bruteforce
#include <bits/stdc++.h>
using namespace std;

long long int inversionCount(long long arr[], long long N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] > arr[j])
                count++;
        }
    }
    return count;
}

int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        cout << inversionCount(A, N);
    }
    return 0;
}
