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
    int n, x, or1 = 0;
    cin >> n >> x;
    vector<int> ans;
    req(i, 0, n - 1)
    {
        if ((i | x) == x)
        {
            ans.pb(i);
            or1 = or1 | i;
        }
        else
            break;
    }
    if ((int)ans.size() == n)
    {
        if (or1 == x)
        {
            for (auto c : ans)
                cout << c << " ";
        }
        else
        {
            req(i, 0, n - 2) cout << ans[i] << " ";
            cout << x;
        }
    }
    else
    {
        for (auto c : ans)
            cout << c << " ";
        cout << x << " ";
        req(i, 2, n - (int)ans.size()) cout << 0 << " ";
    }
    cout << endl;
}

signed main()
{
    //freopen("x.in", "r", stdin);
    //freopen("x.out", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
