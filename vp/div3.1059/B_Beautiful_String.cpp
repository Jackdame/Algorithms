#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isD(const string &s)
{
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] < s[i - 1])
            return false;
    }
    return true;
}

bool isP(const string &s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++, r--;
    }
    return true;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        string p, x;
        vector<int> idx;
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                p += s[i];
                idx.push_back(i + 1);
            }
            else
            {
                x += s[i];
            }
        }
        if (isD(p) && isP(x))
        {
            cout << idx.size() << endl;
            for (int pos : idx)
            {
                cout << pos << " ";
            }
            if (!idx.empty())
                cout << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}