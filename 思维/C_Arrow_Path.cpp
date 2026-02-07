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
const int N = 2e5 + 10;
int g[2][N];
void chaoweic()
{
    bool no = false;
    int n;
    cin >> n;
    memset(g, 0, sizeof g);
    req(i, 0, n - 1)
    {
        char a;
        cin >> a;
        if (i % 2 == 0)
            continue;
        else
        {
            if (a == '<')
                g[0][i] = -1;
            else
                g[0][i] = 1;
        }
    }
    req(i, 0, n - 1)
    {
        char a;
        cin >> a;
        if (i & 1)
            continue;
        else
        {
            if (a == '<')
                g[1][i] = -1;
            else
                g[1][i] = 1;
        }
    }
    req(i, 0, n - 1)
    {
        if (g[0][i] == -1 && (g[1][i - 1] == -1 || g[1][i + 1] == -1))
        {
            no = true;
        }
    }
    if (no)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        chaoweic();
    return 0;
}
