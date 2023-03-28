// https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector <vector <int>> all {};
    int nva, nq;
    cin >> nva >> nq;
    while (nva--){
        vector <int> a{};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            a.push_back(e);
        }
        all.push_back(a);
    }
    while(nq--){
        int a,b;
        cin >> a >> b;
        cout << all.at(a).at(b) << endl;
    }
    return 0;
}