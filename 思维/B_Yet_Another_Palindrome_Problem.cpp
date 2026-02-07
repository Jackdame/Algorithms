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
const int N = 5005;
int v1[N], v2[N];

void Solve()
{
    memset(v1, 0, sizeof v1);
    memset(v2, 0, sizeof v2);
    int n;
    cin >> n;
    vector<int> a(n + 1);
    req(i, 1, n)
    {
        cin >> a[i];
        v1[a[i]]++;
        if (a[i] != a[i - 1])
            v2[a[i]]++;
    }
    req(i, 1, n)
    {
        if (v2[a[i]] >= 2 || v1[a[i]] >= 3)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
