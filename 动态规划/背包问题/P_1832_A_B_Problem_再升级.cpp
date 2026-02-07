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
LL dp[N];
vector<int> b(N, true);
void isprime()
{
    b[0] = b[1] = 0;
    // 筛法找质数
    for (int i = 2; i * i <= 1000; i++)
    {
        if (b[i])
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                b[j] = 0;
            }
        }
    }
}

void chaoweic()
{
    isprime();
    int n;
    cin >> n;
    dp[0] = 1;
    req(i, 2, n)
    {
        if (b[i])
        {
            req(j, i, n)
            {
                dp[j] += dp[j - i];
            }
        }
    }
    cout << dp[n];
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
