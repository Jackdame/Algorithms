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
const int N = 1e5;

void Solve()
{
    int n, len = 0, ans1 = 0;
    cin >> n;
    vector<int> a(n + 1), v(n + 1, 0), ans(n + 1, -1);
    req(i, 1, n) cin >> a[i];
    req(i, 1, n)
    {
        int down = 0, maxi = 0;
        req(j, i + 1, n)
        {
            if (a[i] > a[j])
                down++;
            else if (a[i] < a[j])
                down--;
            if (down >= maxi)
            {
                maxi = down;
                ans[i] = j;
            }
            v[i] = max(v[i], down);
        }
    }
    req(i, 1, n)
    {
        if (v[i] > len)
        {
            len = v[i];
            ans1 = i;
        }
    }
    if (ans1 == 0 && ans[ans1] == -1)
    {
        cout << 1 << " " << 1 << endl;
    }
    else
        cout << ans1 << " " << ans[ans1] << endl;
}

signed main()
{
    // freopen("x.in", "r", stdin);
    // freopen("x.out", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
