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
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;
vector<vector<int>> g;
set<int> node;
void add(int u, int v)
{
    g[u].pb(v);
    g[v].pb(u);
}
void Solve()
{
    int name = 0, max1 = 0;
    int n;
    cin >> n;
    g.assign(n + 1, {});
    node.clear();
    req(i, 1, n - 1)
    {
        int u, v;
        cin >> u >> v;
        add(u, v);
        node.insert(u);
        node.insert(v);
    }
    for (auto s : node)
    {
        int cnt = (int)g[s].size() - 1;
        if (cnt >= max1)
        {
            max1 = cnt;
            name = g[s].back();
        }
    }
    cout << name << " " << max1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
