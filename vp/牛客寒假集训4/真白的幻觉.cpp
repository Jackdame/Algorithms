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
const LL N = 100000000000000000LL;
set<LL> num[20];
int cal(LL x)
{
    int ans = 0;
    while (x > 9)
    {
        LL p = 1;
        while (x > 0)
        {
            p *= (x % 10);
            x /= 10;
        }
        x = p;
        ans++;
    }
    return ans;
}
void dfs(LL cur, int len, int lst)
{
    if (cur > 0)
    {
        int p = cal(cur);
        if (p >= 10)
        {
            num[p].insert(cur);
        }
    }
    if (len == 18)
        return;
    rep(n, lst, 2)
    {
        if (n == 0 || n == 1)
            continue;
        LL nxt = cur * 10 + n;
        if (nxt <= N)
            dfs(nxt, len + 1, n);
    }
}
void chaoweic()
{
    dfs(0, 0, 9);
    cout << 99999999998777772 << " " << 8887777776666444;
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
