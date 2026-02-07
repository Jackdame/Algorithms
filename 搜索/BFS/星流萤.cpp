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
const int N = 2e3 + 10;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int d[N][N][4], g[N][N], n, m;

struct state
{
    int x, y, dir;
};

void bfs()
{
    deque<state> dq;
    memset(d, 0x3f, sizeof d);
    req(i, 0, 3)
    {
        int nx = 1 + dx[i], ny = 1 + dy[i];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && g[nx][ny] == 0)
        {
            d[nx][ny][i] = 0;
            dq.push_front({nx, ny, i});
        }
    }
    while (dq.size())
    {
        state t = dq.front();
        dq.pop_front();
        int x = t.x, y = t.y, dir = t.dir;
        req(i, 0, 3)
        {
            if (i == ((dir + 2) % 4))
                continue;
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && g[nx][ny] == 0)
            {
                int cost = (i == dir) ? 0 : 1;
                if (d[nx][ny][i] > d[x][y][dir] + cost)
                {
                    d[nx][ny][i] = d[x][y][dir] + cost;
                    if (cost == 0)
                    {
                        dq.push_front({nx, ny, i});
                    }
                    else
                    {
                        dq.pb({nx, ny, i});
                    }
                }
            }
        }
    }
    int ans = 1e18;
    req(i, 0, 3) ans = min(ans, d[n][m][i]);
    cout << ans << endl;
}
void Solve()
{

    cin >> n >> m;
    req(i, 1, n)
    {
        req(j, 1, m)
        {
            char c;
            cin >> c;
            g[i][j] = c - '0';
        }
    }
    bfs();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
