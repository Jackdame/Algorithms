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
const int N = 2e5 + 5;
vector<vector<int>> g(N), mp(N);
int vis[N], d[N];
void add(int u, int v)
{
    g[u].pb(v);
    g[v].pb(u);
}
void chaoweic()
{
    int n, m, k;
    cin >> n >> m >> k;
    req(i, 1, n)
    {
        int x;
        cin >> x;
        mp[x].pb(i);
    }
    req(i, 1, m)
    {
        int u, v;
        cin >> u >> v;
        add(u, v);
    }
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        for (auto c : g[t])
        {
            if (!vis[c])
            {
                d[c] = d[t] + 1;
                vis[c] = 1;
                q.push(c);
            }
        }
    }
    req(i, 1, k)
    {
        int mx = -1;
        for (auto c : mp[i])
        {
            mx = max(mx, d[c]);
        }
        cout << mx << " ";
    }
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


