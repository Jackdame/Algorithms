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
    int n, c0 = 0, c1 = 0, c2 = 0, ans = 0;
    bool go = true;
    cin >> n;
    vector<int> a(n);
    req(i, 0, n - 1)
    {
        cin >> a[i];
        if (a[i] % 3 == 0)
            c0++;
        else if (a[i] % 3 == 1)
            c1++;
        else
            c2++;
    }
    int avg = n / 3;
    while (c0 < avg && c2 > avg)
        c0++, c2--, ans++;
    while (c0 > avg && c1 < avg)
        c0--, c1++, ans++;
    while (c1 > avg && c2 < avg)
        c1--, c2++, ans++;
    while (c0 > avg && c2 < avg)
        c0--, c2++, ans += 2;
    while (c1 > avg && c0 < avg)
        c1--, c0++, ans += 2;
    while (c2 > avg && c1 < avg)
        c2--, c1++, ans += 2;
    cout << ans << endl;
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
