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

void Solve()
{
    int ans = 0;
    string s;
    cin >> s;
    int len = s.size();
    if (s[0] != 's')
    {
        ans++;
        s[0] = 's';
    }
    if (s[len - 1] != 's')
    {
        ans++;
        s[len - 1] = 's';
    }
    req(i, 1, len - 1)
    {
        if (s[i] == 'u' && s[i + 1] == 'u')
        {
            ans++;
            s[i + 1] = 's';
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
