#include <bits/stdc++.h>

using namespace std;

int cutRodUtil(vector<int> &price, int ind, int N, vector<vector<int>> &dp)
{

    if (ind == 0)
    {
        return N * price[0];
    }

    if (dp[ind][N] != -1)
        return dp[ind][N];

    int notTaken = 0 + cutRodUtil(price, ind - 1, N, dp);

    int taken = INT_MIN;
    int rodLength = ind + 1;
    if (rodLength <= N)
        taken = price[ind] + cutRodUtil(price, ind, N - rodLength, dp);

    return dp[ind][N] = max(notTaken, taken);
}

int cutRod(vector<int> &price, int N)
{

    vector<vector<int>> dp(N, vector<int>(N + 1, -1));
    return cutRodUtil(price, N - 1, N, dp);
}

int main()
{
    int n;
    vector<int> price;
    cout << "Enter the size of rod: ";
    cin >> n;
    cout << "Enter the prices: \n";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        price.push_back(temp);
    }
    cout << "The Maximum price generated is " << cutRod(price, n);
}