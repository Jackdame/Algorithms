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
    int n, mi = INF, tail = -1, head = -1, idxt = -1;
    cin >> n;
    vector<int> a(n, 0), b;
    req(i, 0, n - 1)
    {
        cin >> a[i];
    }
    req(i, 0, n - 1)
    {
        b.pb(a[i]);
    }
    sort(all(b));
    req(i, 1, n - 1)
    {
        if (b[i] - b[i - 1] < mi)
        {
            mi = b[i] - b[i - 1];
            tail = b[i];
            head = b[i - 1];
            idxt = i;
        }
    }
    cout << head << " ";
    req(i, idxt + 1, n - 1)
    {
        cout << b[i] << " ";
    }
    req(i, 0, idxt - 2)
    {
        cout << b[i] << " ";
    }
    cout << tail << endl;
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
