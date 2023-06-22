// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 3;
//     vector<int> dp(n + 1, -1);
//     dp[0] = 1;
//     dp[1] = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     return 0;
// }

// space optim
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int prev2 = 1;
    int prev1 = 1;
    int cur_i;
    for (int i = 2; i <= n; i++)
    {
        cur_i = prev1 + prev2;
        prev1 = cur_i;
        prev2 = prev1;
    }
    cout << cur_i;
    return 0;
}