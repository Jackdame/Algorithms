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
const int N = 2e5 + 10;

void chaoweic()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m);
    req(i, 0, n - 1) cin >> a[i];
    req(i, 0, m - 1) cin >> b[i];
    string s;
    cin >> s;
    int mxtime = k + 10, cur = 0;
    vector<int> time(2 * k + 1, mxtime);
    req(i, 0, k - 1)
    {
        if (s[i] == 'L')
            cur--;
        else
            cur++;
        int idx = cur + k;
        if (time[idx] == mxtime)
        {
            time[idx] = i + 1;
        }
    }
    sort(all(b));
    vector<int> die(N, 0);
    req(i, 0, n - 1)
    {
        auto it = lower_bound(all(b), a[i]);
        int dt = mxtime;
        if (it != b.end())
        {
            long long r = *it - a[i];
            if (r <= k)
            {
                dt = min(dt, time[r + k]);
            }
        }
        if (it != b.begin())
        {
            long long l = a[i] - *prev(it);
            if (l <= k)
            {
                dt = min(dt, time[-l + k]);
            }
        }

        if (dt <= k)
        {
            die[dt]++;
        }
    }
    int alive = n;
    req(i, 1, k)
    {
        alive -= die[i];
        cout << alive << " ";
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
        chaoweic();
    return 0;
}
