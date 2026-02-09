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
const int N = 505;
int d[13][2] = {
    {0, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}, {-2, 0}, {2, 0}, {0, -2}, {0, 2}};
LL g[N][N];
LL sum[N][N];
struct node
{
    LL w;
    int x, y;
    bool operator<(const node &s) const
    {
        if (w != s.w)
            return w < s.w;
        if (x != s.w)
            return x < s.x;
        return y < s.y;
    }
};

void chaoweic()
{
    int n, m, q, mx = -INF;
    PII pos;
    cin >> n >> m >> q;
    req(i, 1, n)
    {
        req(j, 1, m) cin >> g[i][j];
    }
    priority_queue<node> pq;
    req(i, 2, n - 1)
    {
        req(j, 2, m - 1)
        {
            LL s = 0;
            req(k, 0, 12)
            {
                int xx = i + d[k][0], yy = j + d[k][1];
                s += g[xx][yy];
            }
            sum[i][j] = s;
            pq.push({s, i, j});
        }
    }
    while (q--)
    {
        LL x, y, z;
        cin >> x >> y >> z;
        g[x][y] += z;
        req(s, 0, 12)
        {
            int xx = x + d[s][0], yy = y + d[s][1];
            sum[xx][yy] += z;
            pq.push({sum[xx][yy], xx, yy});
        }
        node top = pq.top();
        cout << top.x << " " << top.y << endl;
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
