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
    int n, cnt = 0, ans = 0;
    cin >> n;
    vector<int> a(n), b(n);
    req(i, 0, n - 1)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            if (i == 0 || i == n - 1)
                cnt++;
            else
                cnt += 2;
        }
    }
    if (cnt % 2 == 0)
    {
        req(i, 0, n - 1)
        {
            if (a[i] == -1)
                a[i] = 0;
        }
        req(i, 1, n - 1)
        {
            b[i] = a[i] - a[i - 1];
            ans += b[i];
        }
    }
    else
    {
        if (a[0] == -1)
        {
            req(i, 1, n - 1)
            {
                if (a[i] == -1)
                {
                    a[i] = 0;
                }
            }
            ans += a[1];
            req(i, 2, n - 1)
            {
                b[i] = a[i] - a[i - 1];
                ans += b[i];
            }
            if (ans >= 0)
            {
                a[0] = abs(ans);
                ans = 0;
            }
            else
                a[0] = 0;
        }
        else if (a[n - 1] == -1)
        {
            req(i, 0, n - 2)
            {
                if (a[i] == -1)
                {
                    a[i] = 0;
                }
            }
            ans -= a[n - 2];
            req(i, 1, n - 2)
            {
                b[i] = a[i] - a[i - 1];
                ans += b[i];
            }
            if (ans <= 0)
            {
                a[n - 1] = abs(ans);
                ans = 0;
            }
            else
                a[n - 1] = 0;
        }
    }
    cout << abs(ans) << endl;
    for (auto c : a)
        cout << c << " ";
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
