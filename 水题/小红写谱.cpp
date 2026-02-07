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
    int n, idx = -1, ans = 0;
    cin >> n;
    vector<int> a(n), aft;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(all(a));
    int h = min(abs(a[n - 1] - a[0]), 8 - abs(a[n - 1] - a[0]));
    req(i, 0, n - 2)
    {
        if (a[i + 1] - a[i] > h)
        {
            h = a[i + 1] - a[i];
            idx = i;
        }
    }
    for (int i = idx + 1; i < n; ++i)
    {
        aft.pb(a[i]);
    }
    for (int i = 0; i <= idx; ++i)
    {
        aft.pb(a[i]);
    }
    req(i, 0, n - 2)
    {
        ans += min(abs(aft[i + 1] - aft[i]), 8 - abs(aft[i + 1] - aft[i]));
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
        Solve();
    return 0;
}
