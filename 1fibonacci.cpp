#include <bits/stdc++.h>
using namespace std;
// top down/memorization
int f(int n, vector<int> dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main()
{
    int n = 5;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);
    return 0;
}

// bottom up/tabulation
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
    return 0;
}

// space optimized
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int prev2 = 0;
    int prev1 = 1;
    int cur_i;
    for (int i = 2; i <= n; i++)
    {
        cur_i = prev2 + prev1;
        prev2 = prev1;
        prev1 = cur_i;
    }
    cout << cur_i;
}
