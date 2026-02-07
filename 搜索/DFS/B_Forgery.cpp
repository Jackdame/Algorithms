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
const int N = 1e3;
int dx[] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
int g[N][N], t[N][N];
void chaoweic()
{
    int n, m;
    bool color = true, ok = true;
    cin >> n >> m;
    memset(t, 0, sizeof t);
    memset(g, 0, sizeof g);
    req(i, 0, n - 1)
    {
        req(j, 0, m - 1)
        {
            char a;
            cin >> a;
            if (a == '#')
                t[i][j] = 1;
        }
    }
    req(i, 1, n - 2)
    {
        req(j, 1, m - 2)
        {
            req(k, 0, 7)
            {
                color = true;
                int xx = i + dx[k], yy = j + dy[k];
                if (t[xx][yy] == 0)
                {
                    color = false;
                    break;
                }
            }
            if (color)
            {
                req(k, 0, 7)
                {
                    int xx = i + dx[k], yy = j + dy[k];
                    g[xx][yy] = 1;
                }
            }
        }
    }
    req(i, 0, n - 1)
    {
        req(j, 0, m - 1)
        {
            if (t[i][j] != g[i][j])
                ok = false;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
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
