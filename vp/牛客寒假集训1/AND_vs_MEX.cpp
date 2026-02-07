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
    auto highbit = [&](int x) -> int
    {
        rep(j, 32, 0)
        {
            if (x >> j & 1)
                return j;
        }
        return -1;
    };
    int l, r;
    cin >> l >> r;
    int b1 = highbit(l), b2 = highbit(r);
    if (b1 == -1)
        cout << r + 1 << endl;
    else if (b1 == b2)
    {
        cout << 0 << endl;
    }
    else if (b2 > (b1 + 1))
    {
        cout << r + 1 << endl;
    }
    else
    {
        int ans = r - (1LL << b2) + 1;
        int low = 0;
        rep(j, b1, 0)
        {
            if ((l >> j & 1) == 0)
                break;
            else
                low |= (1LL << j);
        }
        if (low <= ans)
            ans = r + 1;
        cout << ans << endl;
    }
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
