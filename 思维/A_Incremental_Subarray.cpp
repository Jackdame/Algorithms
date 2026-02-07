#include <bits/stdc++.h>
using namespace std;
#define nf endl
#define ll long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m + 1, 0);
        for (ll i = 1; i <= m; i++)
            cin >> a[i];

        ll ans = n - a[m] + 1;
        for (ll i = 2; i <= m; i++)
        {
            if (a[i] == 1)
                ans = 1;
        }

        cout << ans << endl;
    }

    return 0;
}