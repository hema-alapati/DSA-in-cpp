#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    vector<string> v;
    string k = S + '.';
    string currentWord = "";
    string result = "";
    int vsize = 0;
    for (int i = 0; i < k.length(); i++)
    {
        if (k[i] != '.')
        {
            currentWord += k[i];
        }
        else
        {
            v.push_back(currentWord);
            currentWord = "";
            vsize++;
        }
    }
    for (int i = vsize - 1; i >= 0; i--)
    {
        result += v[i] + '.';
    }
    result.pop_back();
    return result;
}

int main()
{
    string h = "i.love.this.very.much";
    cout << "input is " << h << endl;
    string result = reverseWords(h);
    cout << "output is " << result << endl;
    cout << "expected output is much.very.this.love.i";
    return 0;
}
