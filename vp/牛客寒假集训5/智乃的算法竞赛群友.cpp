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
LL v[3], w[3];
void chaoweic()
{
    LL n, a, b;
    cin >> n >> a >> b;
    v[0] = 2, v[1] = 7, v[2] = 8;
    w[0] = b, w[1] = a, w[2] = (a + b);
    if (n <= 1e5)
    {
        vector<LL> dp(n + 1, 0);
        req(i, 0, 2)
        {
            req(j, v[i], n)
                dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
        return;
    }
    LL vv, ww;
    LL d = max({a / 7, b / 2, (a + b) / 8});
    if (d == a / 7)
    {
        vv = 7;
        ww = a;
    }
    else if (d == b / 2)
    {
        vv = 2;
        ww = b;
    }
    else
    {
        vv = 8;
        ww = a + b;
    }
    LL p = 400 / vv;
    LL c = n / vv - p;
    LL r1 = n - c * vv;

    vector<LL> dp(r1 + 1, 0);
    req(i, 0, 2)
    {
        req(j, v[i], r1)
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
    }
    LL mx = 0;
    for (auto c : dp)
        mx = max(mx, c);

    cout << c * ww + mx << endl;
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
