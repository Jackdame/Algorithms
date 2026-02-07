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
    int n, q;
    cin >> n >> q;
    vector<int> ans(n + 2);
    req(i, 0, n - 1)
    {
        int a, b;
        cin >> a >> b;
        if (a + 1 < b - 1)
        {
            ans[a]++;
            ans[a + 1]++;
            ans[a - 1]++;
            ans[b]++;
            ans[b - 1]++;
            ans[b + 1]++;
        }
        else if (a + 1 < b)
        {
            ans[a]++;
            ans[a - 1]++;
            ans[b]++;
            ans[b - 1]++;
            ans[b + 1]++;
        }
        else if (a + 1 == b)
        {
            ans[a]++;
            ans[b]++;
            ans[a - 1]++;
            ans[b + 1]++;
        }
        else if (a == b)
        {
            ans[a]++;
            ans[a + 1]++;
            ans[a - 1]++;
        }
    }
    while (q--)
    {
        int x;
        cin >> x;
        cout << n - ans[x] << " ";
    }
    cout << endl;
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
