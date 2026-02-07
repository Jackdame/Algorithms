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

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    req(i, 0, n - 1) cin >> a[i];
    // 1. 统计
    int cnt[30] = {0};
    for (int x : a)
    {
        for (int i = 0; i < 30; i++)
        {
            if ((x >> i) & 1)
                cnt[i]++;
        }
    }

    // 2. 求所有非零 cnt[i] 的 GCD
    int g = 0;
    for (int i = 0; i < 30; i++)
    {
        g = gcd(g, cnt[i]);
    }

    for (int k = 1; k <= n; k++)
    {
        if (g % k == 0)
            cout << k << " ";
    }
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
