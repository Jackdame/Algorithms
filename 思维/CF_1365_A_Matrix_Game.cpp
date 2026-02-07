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
const int N = 51;
int g[N][N];
void Solve()
{
    int n, m;
    cin >> n >> m;
    set<int> a, b;
    req(i, 1, n)
    {
        req(j, 1, m)
        {
            cin >> g[i][j];
            if (g[i][j] == 1)
            {
                a.insert(i), b.insert(j);
            }
        }
    }
    int s = min(n - a.size(), m - b.size());
    if (s & 1)
        cout << "Ashish" << endl;
    else
        cout << "Vivek" << endl;
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
