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
vector<int> g(int n)
{
    if (n == 1)
        return {1, 0};
    vector<int> pre = g(n - 1);
    vector<int> now;
    now.pb(pow(2, n) - 1);
    req(i, 1, (int)pre.size() - 1)
    {
        now.pb(pre[i] * 2 + 1);
    }
    req(i, 0, (1 << (n - 1)) - 1)
    {
        now.pb(i * 2);
    }
    return now;
}
void Solve()
{
    int n;
    cin >> n;
    vector<int> tar = g(n);
    req(i, 0, (int)tar.size() - 1)
    {
        cout << tar[i] << " ";
    }
    cout << endl;
}

signed main()
{
    // freopen("x.in", "r", stdin);
    // freopen("x.out", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
