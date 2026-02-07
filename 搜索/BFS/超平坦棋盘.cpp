#include <bits/stdc++.h>
using namespace std;
#define int long long
int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
const int inf = 1e18;
void solve()
{
    int n, m;
    cin >> n >> m;
    typedef array<int, 4> pr;

    int stx = 5, sty = 5;

    vector dp(n + 12, vector(m + 12, vector<int>(8, inf)));
    vector vis(n + 12, vector(m + 12, vector<int>(8)));

    dp[stx][sty][0] = 0;
    priority_queue<pr, vector<pr>, greater<pr>> q;
    q.push(pr{0, stx, sty, 0});

    int ans = 0;
    while (!q.empty())
    {
        auto tmp = q.top();
        q.pop();
        auto [f, x, y, p] = tmp;
        if (vis[x][y][p])
            continue;
        vis[x][y][p] = 1;
        // cout<<x<<' '<<y<<"!!!!!"<<endl;
        if (x == n + stx && y == m + sty)
        {
            ans = f;
            // cout<<f<<"!!!!!!!!"<<endl;
            break;
        }
        for (int k = 0; k < 8; ++k)
        {
            int tx = x + dx[k];
            int ty = y + dy[k];
            if (tx < 0 || ty < 0 || tx > n + 10 || ty > m + 10)
                continue;
            int v = 3;
            if (k == p)
                v += 2;
            if (x == stx && y == sty)
                v = 0;
            if (dp[tx][ty][k] > dp[x][y][p] + v)
            {
                dp[tx][ty][k] = dp[x][y][p] + v;
                q.push(pr{dp[tx][ty][k], tx, ty, k});
            }
        }
    }
    vector dis(n + 12, vector<int>(m + 12, inf));
    vector vis2(n + 12, vector<int>(m + 12));
    while (!q.empty())
        q.pop();
    q.push(pr{0, stx, sty, 0});
    dis[stx][sty] = 0;
    while (!q.empty())
    {
        auto tmp = q.top();
        q.pop();
        auto [f, x, y, p] = tmp;
        if (vis2[x][y])
            continue;
        vis2[x][y] = 1;
        if (x == n + stx && y == m + sty)
        {
            cout << ans + f << '\n';
            break;
        }
        for (int k = 0; k < 8; ++k)
        {
            int tx = x + dx[k];
            int ty = y + dy[k];
            if (tx < 0 || ty < 0 || tx > n + 10 || ty > m + 10)
                continue;
            if (dis[tx][ty] > dis[x][y] + 1)
            {
                dis[tx][ty] = dis[x][y] + 1;
                q.push(pr{dis[tx][ty], tx, ty, 0});
            }
        }
    }
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // init();
    cin >> T;
    while (T--)
        solve();
    return 0;
}