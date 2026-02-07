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
    int n, idx = -1, cnt = 0, ma = 0;
    cin >> n;
    vector<int> a(n), b(n, 0);
    req(i, 0, n - 1) cin >> a[i];
    req(i, 0, n - 2) cnt += abs(a[i] - a[i + 1]);
    req(i, 1, n - 2)
    {
        int bef = abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]);
        int aft = abs(a[i - 1] - a[i + 1]);
        ma = max(ma, bef - aft);
    }
    ma = max(ma, abs(a[0] - a[1]));
    ma = max(ma, abs(a[n - 2] - a[n - 1]));
    cout << cnt - ma << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
