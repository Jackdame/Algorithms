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
using namespace std;
using LL = long long;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5 + 10;
bool h[N];
vector<int> g[N]; // bushigemen zheshi lingjiebiao?
int n, m, ans = 0;
void dfs(int u, int parent, int cs)
{
    if (h[u])
    {
        cs++;
    }
    else
        cs = 0;
    if (cs > m)
        return;
    bool isleaf = true;
    for (int v : g[u])
        if (v != parent)
        {
            isleaf = false;
            dfs(v, u, cs);
        }
    if (isleaf)
        ans++;
}
void Solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1, -1, 0);
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
