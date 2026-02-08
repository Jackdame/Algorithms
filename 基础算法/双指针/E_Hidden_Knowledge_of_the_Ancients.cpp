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
    int n, k, l, r, ans = 0;
    set<int> s;       // 记录当前区间数字最后出现的下标
    map<int, int> mp; // 记录每个数字最后出现的下标
    cin >> n >> k >> l >> r;
    vector<int> a(n + 1);
    req(i, 1, n) cin >> a[i];
    req(i, 1, l)
    {
        if (mp[a[i]])
            s.erase(mp[a[i]]);
        s.insert(mp[a[i]] = i);
    }
    int L = 1, R = l;
    while (R <= n)
    {
        if (R - L + 1 > r)
        {
            if (s.count(L))
                s.erase(L);
            L++;
        }
        while ((int)s.size() > k)
        {
            if (s.count(L))
                s.erase(L);
            L++;
        }
        if ((int)s.size() == k && R - L + 1 >= l)
        {
            int f = *s.begin();
            f = min(f, R - l + 1);
            ans += f - L + 1;
        }
        R++;
        if (mp[a[R]])
        {
            s.erase(mp[a[R]]);
        }
        s.insert(mp[a[R]] = R);
    }
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