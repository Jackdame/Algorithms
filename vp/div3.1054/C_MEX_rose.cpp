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
    int n, k, cnt = 0, kp = -1;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    req(i, 0, n - 1)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    req(i, 0, k)
    {
        if (mp[i] == 0 && i != k)
            cnt++;
        if (i == k)
            kp = mp[i];
    }
    if (kp >= cnt)
        cout << kp << endl;
    else
        cout << cnt << endl;
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
