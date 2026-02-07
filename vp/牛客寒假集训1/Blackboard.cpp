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
const LL mod = 998244353;
const int N = 1e5;

void chaoweic()
{
    int n, l = 0;
    cin >> n;
    vector<int> a(n + 1), pre(n + 1);
    req(i, 1, n)
    {
        cin >> a[i];
        pre[i] = l;
        if (a[i] > 0)
            l = i; // 维护i前最近的非0数
    }
    vector<int> dp(n + 2), s(n + 2);
    dp[1] = 1;
    s[1] = 1;
    req(i, 1, n)
    {
        int j = i;
        int cur = 0;
        while (j > 0 && ((cur & a[j]) == 0))
        {
            cur |= a[j];
            j = pre[j];
        }
        dp[i + 1] = (s[i] - s[j] + mod) % mod; // j到i的dp和
        s[i + 1] = (s[i] + dp[i + 1]) % mod;   // 神秘维护前缀和
    }
    cout << dp[n + 1] << endl;
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
