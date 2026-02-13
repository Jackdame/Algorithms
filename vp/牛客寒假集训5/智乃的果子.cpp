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
typedef __int128_t int128;
void chaoweic()
{
    int n;
    cin >> n;
    map<int128, LL> mp;
    req(i, 1, n)
    {
        int u, w;
        cin >> u >> w;
        mp[w] = u;
    }
    LL ans = 0;
    for (auto c : mp)
    {
        if (c.se > 1)
        {
            ans = (ans + ((LL)(c.fi) * 2 * (LL)(c.se / 2) % mod)) % mod;
            mp[c.fi] %= 2;
            mp[c.fi * 2] += c.se / 2;
            if (mp[c.fi] == 0)
                mp.erase(c.fi);
        }
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto c : mp)
    {
        pq.push(c.fi);
    }
    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        pq.push(x + y);
        ans = (ans + x + y) % mod;
    }
    cout << ans % mod << endl;
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
