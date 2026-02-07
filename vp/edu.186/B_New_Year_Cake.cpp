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
    int a, b;
    cin >> a >> b;
    LL cur_a = a, cur_b = b, k1 = 0;
    while (true)
    {
        if (cur_a >= pow(2, k1))
        {
            cur_a -= pow(2, k1);
            k1++;
        }
        else
            break;
        if (cur_b >= pow(2, k1))
        {
            cur_b -= pow(2, k1);
            k1++;
        }
        else
            break;
    }
    LL cur_a1 = a, cur_b1 = b, k2 = 0;
    while (true)
    {
        if (cur_b1 >= pow(2, k2))
        {
            cur_b1 -= pow(2, k2);
            k2++;
        }
        else
            break;
        if (cur_a1 >= pow(2, k2))
        {
            cur_a1 -= pow(2, k2);
            k2++;
        }
        else
            break;
    }
    int ans = max(k1, k2);
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        chaoweic();
    }
    return 0;
}
