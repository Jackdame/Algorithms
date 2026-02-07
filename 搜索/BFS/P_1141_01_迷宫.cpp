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
const int N = 1005;
int n, m;
int g[N][N];      // 存储迷宫
int color[N][N];  // 标记连通块编号，0表示未访问
int size1[N * N]; // 存储每个连通块的大小
int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};

void bfs(int x, int y, int c)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    color[x][y] = c;
    size1[c] = 1; // 初始大小为1（包含起点）

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // 检查边界、未访问、颜色交替
            if (nx < 1 || nx > n || ny < 1 || ny > n)
                continue;
            if (color[nx][ny] || g[nx][ny] == g[x][y])
                continue;

            color[nx][ny] = c;
            size1[c]++;
            q.push({nx, ny});
        }
    }
}

void Solve()
{
    cin >> n >> m;
    req(i, 1, n)
    {
        string s;
        cin >> s;
        req(j, 0, n - 1)
        {
            g[i][j + 1] = s[j] - '0';
        }
    }
    int cnt = 0;
    req(i, 1, n)
    {
        req(j, 1, n)
        {
            if (!color[i][j])
                bfs(i, j, ++cnt);
        }
    }
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        cout << size1[color[x][y]] << endl;
    }
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
