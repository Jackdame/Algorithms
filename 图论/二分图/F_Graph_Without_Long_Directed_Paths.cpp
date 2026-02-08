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
const int N = 2e5 + 10;
vector<int> g[N];
vector<PII> edges;
int st[N];
bool no = false;
void dfs(int u, int color)
{
    st[u] = color;
    for (auto v : g[u])
    {
        if (!st[v])
        {
            if (color == 1)
                dfs(v, 2);
            else
                dfs(v, 1);
        }
        else
        {
            if (st[v] == color)
            {
                no = true;
                return;
            }
        }
    }
}
void chaoweic()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        edges.pb({u, v});
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1, 1);
    if (no)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (auto t : edges)
        {
            int u = t.fi, v = t.se;
            if (st[u] == 1 && st[v] == 2)
                cout << 1;
            else
                cout << 0;
        }
    }
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