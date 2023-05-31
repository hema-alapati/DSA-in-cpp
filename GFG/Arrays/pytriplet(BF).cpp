#include <bits/stdc++.h>
using namespace std;

void checkPyTriplet(vector<int> v, int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (v[i] * v[i] + v[j] * v[j] == v[k] * v[k])
                {
                    temp = 1;
                }
            }
        }
    }
    if (temp == 0)
        cout << "no";
    else
        cout << "yes";
}

int main()
{
    vector<int> v{3, 8, 5};
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(6);
    // v.push_back(5);
    int n = v.size();
    checkPyTriplet(v, n);
    return 0;
}
