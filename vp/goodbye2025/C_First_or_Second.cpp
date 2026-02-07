/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    if (n == 2)
    {
        cout << max(a[0], -a[1]) << "\n";
        return;
    }
    ll offset = 0;
    ll maxD = 0;
    ll maxS = a[0];

    for (int k = 1; k < n - 1; ++k)
    {
        ll oldoffset = offset;
        offset += a[k];
        ll actualnew = maxS - oldoffset;
        ll newd = actualnew + offset;
        ll news = actualnew + a[k] + offset;

        maxD = max(maxD, newd);
        maxS = max(maxS, news);
    }
    ll finals = maxS - offset;
    ll finald = maxD - offset - a[n - 1];

    cout << max(finals, finald) << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
    */
// 上面是动态规划加某种优化手法
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

void chaoweic()
{
    int n;
    cin >> n;
    vector<int> a(n);
    req(i, 0, n - 1) cin >> a[i];

    if (n == 2)
    {
        cout << max(a[0], -a[1]) << endl;
        return;
    }
    vector<int> pre(n + 1, 0);
    req(i, 1, n - 1)
    {
        pre[i] = pre[i - 1] + abs(a[i]);
    }

    vector<int> suff(n + 1, 0);
    rep(i, n - 1, 0)
    {
        suff[i] = suff[i + 1] - a[i];
    }
    int ans = -2e18;
    req(k, 0, n - 1)
    {
        int cur = 0;
        if (k == 0)
        {
            cur = suff[1];
        }
        else
        {
            cur = a[0] + pre[k - 1] + suff[k + 1];
        }
        ans = max(ans, cur);
    }
    cout << ans << endl;
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
