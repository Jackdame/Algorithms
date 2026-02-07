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
const int N = 1005;
int n, x;
int lose[N], win[N], use[N], dp[N];
void chaoweic()
{
    cin >> n >> x;
    req(i, 1, n)
    {
        cin >> lose[i] >> win[i] >> use[i];
    }
    req(i, 1, n)
    {
        rep(j, x, use[i])
        {
            dp[j] = max(dp[j] + lose[i], dp[j - use[i]] + win[i]);
        }
        rep(j, use[i] - 1, 0)
        {
            dp[j] += lose[i];
        }
    }
    cout << 5 * dp[x];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        chaoweic();
    return 0;
}
