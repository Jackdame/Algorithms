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
    int n, ans = 0;
    cin >> n;
    vector<int> a(n + 1);
    req(i, 1, n) cin >> a[i];
    req(i, 1, n - 1)
    {
        ans += max(a[i], a[i + 1]);
    }
    ans += max(a[1], a[n]);
    ans -= *max_element(all(a));
    cout << ans << endl;
}

signed main()
{
    // freopen("x.in","r",stdin);
    // freopen("x.out","w",stdout);
    int t = 1;
    cin >> t;
    while (t--)
        chaoweic();
    return 0;
}