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
const int N = 105;
int mp[N][N], vis[N][N] = {0};
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[] = {0, -1, 0, 1, 1, -1, -1, 1};
int n, m, ans = 0;
void dfs(int x, int y)
{
    vis[x][y] = 1;
    mp[x][y] = 2;
    req(i, 0, 7)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (vis[nx][ny] == 0 && mp[nx][ny] == 1)
        {
            dfs(nx, ny);
        }
    }
}
void Solve()
{
    cin >> n >> m;
    req(i, 1, n)
    {
        req(j, 1, m)
        {
            char a;
            cin >> a;
            if (a == 'W')
            {
                mp[i][j] = 1;
            }
            else
                mp[i][j] = 0;
        }
    }
    req(i, 1, n)
    {
        req(j, 1, m)
        {
            if (mp[i][j] == 1)
            {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        Solve();
    return 0;
}
