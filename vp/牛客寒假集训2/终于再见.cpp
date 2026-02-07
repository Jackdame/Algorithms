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
int dist[N];
void chaoweic()
{
    int n, m;
    cin >> n >> m;
    vector<int> deg(n + 1);
    req(i, 1, m)
    {
        int u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
        g[u].pb(v);
        g[v].pb(u);
    }
    map<int, deque<int>> mp;
    req(i, 1, n)
    {
        mp[deg[i]].pb(i);
    }
    vector<int> dist(n + 1, 1e9), ans(n + 1);
    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {
        int x = it->first;
        deque<int> q = it->second;
        for (auto &i : q)
        {
            if (dist[i] > 1e8)
                dist[i] = -1;
            ans[i] = dist[i];
            dist[i] = 0;
        }
        while (q.size())
        {
            auto u = q.front();
            q.pop_front();
            for (auto &v : g[u])
            {
                if (deg[v] >= x)
                    continue;
                if (dist[v] > dist[u] + 1)
                { // 松弛
                    dist[v] = dist[u] + 1;
                    q.pb(v);
                }
            }
        }
    }
    req(i, 1, n) cout << ans[i] << " ";
    printf("\n");
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
