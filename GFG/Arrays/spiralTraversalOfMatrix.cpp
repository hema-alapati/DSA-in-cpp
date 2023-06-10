#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

void spiralPrint(int m, int n, int a[R][C])
{
    int i;
    int k = 0, l = 0;
    // index of first row=k index of firs column=l
    // index of last row=m index of last column=n
    while (k < m && l < n)
    {
        for (int i = l; i < n; i++)
        {
            cout << a[k][i] << " ";
        }
        k++;
        for (int i = k; i < m; i++)
        {
            cout << a[i][n - 1] << " ";
        }
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
            {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }
        if (l < n)
        {
            for (int i = m - 1; i >= k; i--)
            {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}

int main()
{
    int a[R][C] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiralPrint(R, C, a);
    return 0;
}
