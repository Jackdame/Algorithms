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
    int n, m, cnt = 0, mx = 0;
    bool bu = false;
    cin >> n >> m;
    vector<int> a(n);
    req(i, 0, n - 1) cin >> a[i];
    sort(all(a));
    int L = 0;
    bool ans = false;
    for (int R = 0; R < n; ++R)
    {
        while (a[R] - a[L] > m - 1)
        {
            L++;
        }
        if (R - L + 1 >= m - 1)
        {
            ans = true;
            break;
        }
    }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
