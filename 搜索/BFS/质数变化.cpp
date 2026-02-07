#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n'
#define PII pair<int, int>
#define all(x) (x).begin(), (x).end()
#define dbg(x) cout << #x << ":" << x << endl;
const int N = 5e5 + 10;
const int mod = 1e9 + 7;

bool isprime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> vis(10010);

    queue<PII> q;
    q.push({a, 0LL});
    vis[a] = 1;
    while (!q.empty())
    {
        auto [x, cnt] = q.front();
        q.pop();
        if (x == b)
        {
            cout << cnt << endl;
            return;
        }

        int d[4];
        int now = x;
        for (int i = 3; i >= 0; i--)
        {
            d[i] = now % 10;
            now /= 10;
        }

        for (int i = 0; i < 4; i++)
        {
            now = d[i];
            for (int j = 0; j <= 9; j++)
            {
                if (j == now)
                    continue;
                d[i] = j;
                int res = d[0] * 1000 + d[1] * 100 + d[2] * 10 + d[3];
                if (vis[res])
                    continue;
                if (isprime(res))
                {
                    q.push({res, cnt + 1});
                    vis[res] = 1;
                }
            }
            d[i] = now;
        }
    }
    cout << "-1\n";
}

signed main()
{
    ios int T;
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}