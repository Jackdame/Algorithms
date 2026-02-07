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
    int n, m, h;
    cin >> n >> m >> h;
    vector<long long> a(n + 1), acopy(n + 1);
    long long mxinit = -1;
    req(i, 1, n)
    {
        cin >> a[i];
        acopy[i] = a[i];
        if (a[i] > mxinit)
            mxinit = a[i];
    }

    long long cur = mxinit;
    vector<int> aff;
    vector<bool> his(n + 1, false);

    for (int i = 0; i < m; ++i)
    {
        int b;
        long long c;
        cin >> b >> c;
        if (!his[b])
        {
            aff.push_back(b);
            his[b] = true;
        }
        a[b] += c;
        if (a[b] > h)
        {
            for (int idx : aff)
            {
                a[idx] = acopy[idx];
                his[idx] = false;
            }
            aff.clear();
            cur = mxinit;
        }
        else
        {
            if (a[b] > cur)
                cur = a[b];
        }
    }
    req(i, 1, n)
    {
        cout << a[i] << " ";
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
