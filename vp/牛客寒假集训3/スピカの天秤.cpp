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
    LL n, m, ans = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);
    req(i, 0, n - 1) cin >> a[i];
    req(i, 0, m - 1) cin >> b[i];
    sort(all(a));
    sort(all(b));
    LL cnta = accumulate(all(a), 0LL), cntb = accumulate(all(b), 0LL);
    if (cnta == cntb)
    {
        cout << 1 << endl;
        return;
    }
    else if (cnta > cntb)
    {
        while (cnta > cntb)
        {
            cnta -= a.back();
            a.pop_back();
            ans++;
        }
    }
    else
    {
        while (cnta < cntb)
        {
            cntb -= b.back();
            b.pop_back();
            ans++;
        }
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
