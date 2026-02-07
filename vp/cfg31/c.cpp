#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    if (!(cin >> n >> k))
        return;

    if (k == 1)
    {
        cout << n << "\n";
        return;
    }
    vector<long long> res;
    res.push_back(n);

    if (k % 2 == 1)
    {
        for (int i = 0; i < k - 1; ++i)
        {
            res.push_back(n);
        }
    }
    else
    {
        res.push_back(0);
        for (int i = 0; i < k - 2; ++i)
        {
            res.push_back(n);
        }
    }

    for (int i = 0; i < k; ++i)
    {
        cout << res[i] << (i == k - 1 ? "" : " ");
    }
    cout << "\n";
}

int main()
{
    //freopen("x.in", "r", stdin);
    //freopen("x.out", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}