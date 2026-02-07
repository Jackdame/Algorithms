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
set<int> s, t;
int vis[N] = {0};
vector<int> g[N];
void chaoweic()
{
    int n, m;
    cin >> n >> m;
    s.clear();
    t.clear();
    req(i, 1, n)
    {
        g[i].clear();
        vis[i] = 0;
    }
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    req(i, 1, n)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            s.insert(i);
            for (auto v : g[i])
            {
                if (!vis[v])
                {
                    vis[v] = 1;
                    t.insert(v);
                }
            }
        }
    }
    if ((int)s.size() <= n / 2)
    {
        cout << s.size() << endl;
        for (auto c : s)
        {
            cout << c << " ";
        }
    }
    else
    {
        cout << t.size() << endl;
        for (auto c : t)
        {
            cout << c << " ";
        }
    }
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        chaoweic();
    }
    return 0;
}