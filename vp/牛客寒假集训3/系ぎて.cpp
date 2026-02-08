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
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
int n, m;
string g[505]; // 遇到未知的大小可以用string数组



int id(int x, int y)
{
    return x * m + y;
}

vector<int> sp(int s, int t, char ban, vector<char> &u)
{
    int N = n * m;
    vector<int> pre(N, -1);
    queue<int> q;
    pre[s] = s;
    q.push(s);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        int x = v / m, y = v % m;
        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            int w = id(nx, ny);
            if (pre[w] != -1)
                continue;
            if (w != t && w != s)
            {
                if (g[nx][ny] == ban)
                    continue;
                if (g[nx][ny] != '0')
                    continue;
                if (u[w])
                    continue;
            }
            else
            {
                if (g[nx][ny] == ban)
                    continue;
            }
            pre[w] = v;
            q.push(w);
        }
    }
    if (pre[t] == -1)
        return {};
    vector<int> p;
    for (int v = t;; v = pre[v])
    {
        p.push_back(v);
        if (v == s)
            break;
    }
    reverse(p.begin(), p.end());
    return p;
}

int ok(int s, int t, char ban, vector<char> &u)
{
    int N = n * m;
    vector<char> vis(N);
    queue<int> q;
    vis[s] = 1;
    q.push(s);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        if (v == t)
            return 1;
        int x = v / m, y = v % m;
        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            int w = id(nx, ny);
            if (vis[w])
                continue;
            if (w != t && w != s)
            {
                if (g[nx][ny] == ban)
                    continue;
                if (g[nx][ny] != '0')
                    continue;
                if (u[w])
                    continue;
            }
            else
            {
                if (g[nx][ny] == ban)
                    continue;
            }
            vis[w] = 1;
            q.push(w);
        }
    }
    return 0;
}

vector<char> u;

int go(int s1, int t1, char ban1, int s2, int t2, char ban2)
{
    fill(u.begin(), u.end(), 0);
    vector<int> p = sp(s1, t1, ban1, u);
    if (p.empty())
        return 0;
    for (int v : p)
    {
        int x = v / m, y = v % m;
        if (g[x][y] == '0')
            u[v] = 1;
    }
    return ok(s2, t2, ban2, u);
}

int chaoweic()
{
    vector<pair<int, int>> p1, p2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == '1')
                p1.push_back({i, j});
            if (g[i][j] == '2')
                p2.push_back({i, j});
        }
    }
    int a1 = id(p1[0].first, p1[0].second), b1 = id(p1[1].first, p1[1].second);
    int a2 = id(p2[0].first, p2[0].second), b2 = id(p2[1].first, p2[1].second);
    u.assign(n * m, 0);
    if (go(a1, b1, '2', a2, b2, '1'))
        return 1;
    if (go(a2, b2, '1', a1, b1, '2'))
        return 1;
    return 0;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        req(i, 0, n - 1) cin >> g[i];
        cout << (chaoweic() ? "YES\n" : "NO\n");
    }
    return 0;
}
