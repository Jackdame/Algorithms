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
#include <functional>
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
vector<vector<int>> g(N);
int vis[N];
int vcnt = 0, ecnt = 0;
void add(int u, int v)
{
    g[u].pb(v);
    g[v].pb(u);
}
void dfs(int u)
{
    vis[u] = true;
    vcnt++;
    for (auto v : g[u])
    {
        ecnt++;
        if (!vis[v])
            dfs(v);
    }
}
void chaoweic()
{
    int n, m, ans = 0;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        add(u, v);
    }
    req(i, 1, n)
    {
        if (!vis[i])
        {
            vcnt = 0, ecnt = 0;
            dfs(i);
            int actual_e = ecnt / 2;
            if (actual_e == vcnt - 1)
                ans++;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        chaoweic();
    return 0;
}
