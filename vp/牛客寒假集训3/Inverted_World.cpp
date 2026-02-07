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

int f(string s)
{
    int mx = 0, mn = 0, now = 0;
    req(i, 0, (int)s.size() - 1)
    {
        if (s[i] == '1')
            now++;
        else
            now--;
        if (now < 0)
            now = 0;
        mx = max(mx, now);
    }
    now = 0;
    req(i, 0, (int)s.size() - 1)
    {
        if (s[i] == '1')
            now++;
        else
            now--;
        if (now > 0)
            now = 0;
        mn = min(mn, now);
    }
    return max(mx, abs(mn));
}
void chaoweic()
{
    int n;
    cin >> n;
    string s, t = "";
    cin >> s;
    req(i, 0, n - 1)
    {
        if ((i & 1) && s[i] == '1')
            t += s[i];
        if (!(i & 1) && s[i] == '0')
            t += s[i];
    }
    int ans = f(t);
    t = "";
    req(i, 0, n - 1)
    {
        if ((i & 1) && s[i] == '0')
            t += s[i];
        if (!(i & 1) && s[i] == '1')
            t += s[i];
    }
    ans = min(ans, f(t));
    cout << ans << endl;
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
