#include <bits/stdc++.h>
using namespace std;

int findTriplet(vector<int> v, int n)
{
    int status = 0;
    for (int i = 0; i < n; i++)
    {
        v[i] = v[i] * v[i];
    }
    sort(v.begin(), v.end());
    for (int i = n - 1; i > 2; i--)
    {
        int left = 0;
        int right = i - 1;
        while (left < right)
        {
            if (v[i] == v[left] + v[right])
            {
                status = 1;
            }
            else
            {
                if (v[i] > v[left] + v[right])
                    right--;
                else
                    left++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    if (findTriplet(v, n) == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
