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
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    req(i, 0, n - 1) cin >> a[i];
    req(i, 0, n - 1) cin >> b[i];
    req(i, 0, n - 1) cin >> c[i];

    LL cnt1 = 0;
    req(i, 0, n - 1)
    {
        bool g = true;
        req(j, 0, n - 1)
        {
            if (a[j] >= b[(j + i) % n])
            {
                g = false;
                break;
            }
        }
        if (g)
            cnt1++;
    }
    LL cnt2 = 0;
    req(i, 0, n - 1)
    {
        bool g = true;
        req(j, 0, n - 1)
        {
            if (b[j] >= c[(j + i) % n])
            {
                g = false;
                break;
            }
        }
        if (g)
            cnt2++;
    }
    cout << n * cnt1 * cnt2 << endl;
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
