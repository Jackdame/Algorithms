#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e9 + 5;
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a;
    unordered_set<ll> possible;
    while (n--)
    {
        ll y;
        cin >> y;
        if (y == 1)
        {
            possible.insert(1);
        }
        else
        {
            a.push_back(y);
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        ll product = 1;
        for (int j = i; j >= 0; j--)
        {
            product *= a[j];
            if (product > N)
                break;
            possible.insert(product);
        }
    }
    while (q--)
    {
        ll x;
        cin >> x;
        cout << (possible.count(x) ? "YES" : "NO") << "\n";
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}