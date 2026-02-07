#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <numeric>
#include <map>
#include <set>
#include <string>
#include <stack>
#include <iomanip>
#include <unordered_map>
#include <cstring>
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
const int N = 1e5 + 5;
int n, x, v, t;
int g[205][205];
int w[N], z[N], b[N];
int dp[N];

void Solve()
{
    cin >> v >> n;
    req(i, 1, n)
    {
        cin >> w[i] >> z[i] >> x;
        b[x]++;
        t = max(t, x);
        g[x][b[x]] = i;
    }
    req(i, 1, t)
    {
        rep(j, v, 0)
        {
            req(k, 1, b[i])
            {
                if (j >= w[g[i][k]])
                {
                    dp[j] = max(dp[j], dp[j - w[g[i][k]]] + z[g[i][k]]);
                }
            }
        }
    }
    cout << dp[v];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
