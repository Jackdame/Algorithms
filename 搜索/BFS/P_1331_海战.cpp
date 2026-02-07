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
const int N = 1e3 + 5;
int dx[] = {0, -1, 0, 1}, dy[] = {1, 0, -1, 0};
int g[N][N], maxn, maxm, minn, minm, ans = 0, n, m;
void bfs(int x, int y)
{
    queue<PII> q;
    q.push({x, y});
    maxn = minn = x;
    maxm = minm = y;
    g[x][y] = 2;
    while (q.size())
    {
        auto t = q.front();
        q.pop();
        req(i, 0, 3)
        {
            int xx = t.fi + dx[i], yy = t.se + dy[i];
            if (xx < 1 || xx > n || yy < 1 || yy > m || g[xx][yy] != 1)
                continue;
            g[xx][yy] = 2;
            q.push({xx, yy});
            maxn = max(maxn, xx);
            maxm = max(maxm, yy);
            minn = min(minn, xx);
            minm = min(minm, yy);
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
            if (a == '#')
                g[i][j] = 1;
            else
                g[i][j] = 0;
        }
    }
    req(i, 1, n)
    {
        req(j, 1, m)
        {
            if (g[i][j] == 1)
            {
                maxn = maxm = -1;
                minn = minm = 1e3 + 5;
                bfs(i, j);
                req(l, minn, maxn)
                {
                    req(r, minm, maxm)
                    {
                        if (g[l][r] != 2)
                        {
                            cout << "Bad placement." << endl;
                            return;
                        }
                    }
                }
                ans++;
            }
        }
    }
    cout << "There are " << ans << " ships.";
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
