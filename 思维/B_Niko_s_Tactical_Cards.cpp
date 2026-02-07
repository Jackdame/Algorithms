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
const LL INF = 1e9;
const LL mod = 1e9 + 7;
const int N = 1e5 + 10;
int n;
int a[N], b[N];
void Solve()
{
    cin >> n;
    req(i, 1, n) cin >> a[i];
    req(i, 1, n) cin >> b[i];
    LL mx = 0, mn = 0;
    req(i, 1, n)
    {
        LL nmx = max(mx - a[i], b[i] - mn);
        LL nmn = min(mn - a[i], b[i] - mx);
        mx = nmx, mn = nmn;
    }
    cout << mx << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
