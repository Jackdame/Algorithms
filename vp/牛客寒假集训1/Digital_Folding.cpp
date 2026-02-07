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

unsigned long long reverse_num(LL num)
{
    LL res = 0;
    while (num > 0)
    {
        res = res * 10 + (num % 10);
        num /= 10;
    }
    return res;
}
void chaoweic()
{
    unsigned long long l, r;
    cin >> l >> r;
    unsigned long long mx = reverse_num(r);
    unsigned long long p10 = 10;
    for (int i = 0; i < 19; ++i)
    {
        unsigned long long cur = (r / p10) * p10 - 1;

        if (cur >= l && cur <= r)
        {
            mx = max(mx, reverse_num(cur));
        }
        else if (cur < l)
            break;
        p10 *= 10;
    }
    cout << mx << endl;
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
