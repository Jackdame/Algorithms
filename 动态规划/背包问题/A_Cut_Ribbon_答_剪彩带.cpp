#include <bits/stdc++.h>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define req(i, a, n) for (int i = a; i <= n; ++i)
#define rep(i, a, n) for (int i = a; i >= n; --i)
#define pb push_back
#define int long long
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;
int n, w[4], f[4010];
void Solve()
{
    cin >> n;
    req(i, 1, 3) cin >> w[i];
    memset(f, -1, sizeof f);
    f[0] = 0;
    req(i, 1, 3)
    {
        req(j, w[i], n)
        {
            if (f[j - w[i]] != -1)
                f[j] = max(f[j], f[j - w[i]] + 1);
        }
    }
    cout << f[n];
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
