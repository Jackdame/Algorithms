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
const int N = 1005;
int dp[N];
void chaoweic()
{
    int h1, m1, h2, m2, n;
    scanf("%d:%d %d:%d %d", &h1, &m1, &h2, &m2, &n);
    int total = (h2 * 60 + m2) - (h1 * 60 + m1);
    req(i, 1, n)
    {
        int cost, val, p;
        scanf("%d %d %d", &cost, &val, &p);

        if (p == 0)
        {
            req(j, cost, total)
            {
                dp[j] = max(dp[j], dp[j - cost] + val);
            }
        }
        else
        {
            int num = p;
            for (int k = 1; num > 0; k <<= 1)
            {
                int mul = min(k, num);

                rep(j, total, mul * cost)
                {
                    dp[j] = max(dp[j], dp[j - mul * cost] + mul * val);
                }
                num -= mul;
            }
        }
    }

    printf("%d\n", dp[total]);
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
