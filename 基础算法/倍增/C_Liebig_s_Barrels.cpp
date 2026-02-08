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
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;

void chaoweic()
{
    int n, k, l, cnt = 0;
    cin >> n >> k >> l;
    vector<int> a(n * k);
    req(i, 0, n * k - 1)
    {
        cin >> a[i];
    }
    sort(all(a));
    while (cnt < n * k && a[cnt] <= a[0] + l)
        cnt++;
    if (cnt < n)
    {
        cout << 0 << endl;
        return;
    }
    LL ans = 0;
    int p = 0;
    req(i, 0, n - 1)
    {
        ans += a[p];
        p++;
        int skip = min(k - 1, (cnt - p) - (n - 1 - i));
        p += max(0, skip);
    }
    cout << ans << endl;
}

signed main()
{
    // freopen("x.in","r",stdin);
    // reopen("x.out","w",stdout);
    int t = 1;
    // cin >> t;
    while (t--)
        chaoweic();
    return 0;
}