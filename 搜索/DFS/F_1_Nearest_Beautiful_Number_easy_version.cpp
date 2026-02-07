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
const int N = 1e5 + 5;
int n, k, l, r, mid, ans, a[N], b[N], cnta, cntb;
void dfs(int k, int x, int y, int res)
{
    b[++cntb] = res;
    if (k > 9)
        return;
    dfs(k + 1, x, y, res * 10 + y);
}
void Solve()
{
    req(i, 1, 9)
    {
        for (int j = 1, k = i; j <= 9; j++)
        {
            a[++cnta] = k;
            k = k * 10 + i;
        }
    }
    a[++cnta] = 1111111111;
    req(i, 0, 9)
    {
        req(j, i + 1, 9)
            dfs(1, i, j, 0);
    }
    b[++cntb] = 1e9;
    sort(a + 1, a + cnta + 1);
    sort(b + 1, b + cntb + 1);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k == 1)
        {
            l = 1, r = cnta, ans = a[cnta];
            while (l <= r)
            {
                mid = l + r >> 1;
                if (a[mid] >= n)
                    ans = min(ans, a[mid]), r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        else
        {
            l = 1, r = cntb, ans = b[cntb];
            while (l <= r)
            {
                mid = l + r >> 1;
                if (b[mid] >= n)
                    ans = min(ans, b[mid]), r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
