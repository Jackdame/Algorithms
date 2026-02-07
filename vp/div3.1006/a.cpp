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
    int n, k, p;
    cin >> n >> k >> p;
    int k1 = abs(k), p1 = abs(p);
    if (n * p1 < k1)
        cout << -1 << endl;
    else
    {
        int m = k1 / p1;
        if (k1 % p1 == 0)
            cout << m << endl;
        else
            cout << m + 1 << endl;
    }
}

signed main()
{

    int t;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
