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
const int N = 102;
vector<int> g[N];
int vis[N], cnt = 0;
void dfs(int u)
{
    vis[u] = 1;
    cnt++;
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
}
void chaoweic()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO" << endl;
        return;
    }
    req(i, 1, m)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1);
    cout << ((cnt == n) ? "FHTAGN!" : "NO") << endl;
}

signed main()
{
    // freopen("x.in","r",stdin);
    // freopen("x.out","w",stdout);
    int t = 1;
    // cin >> t;
    while (t--)
        chaoweic();
    return 0;
}