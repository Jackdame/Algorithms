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
const int N = 9;
int g[N][N];
void chaoweic()
{
    map<int, int> mp;
    req(i, 1, 3)
    {
        req(j, 1, 3)
        {
            cin >> g[i][j];
            mp[g[i][j]]++;
        }
    }
    for (auto c : mp)
    {
        if (c.se != 1)
        {
            cout << "No";
            return;
        }
    }
    LL ans = 0;
    req(i, 1, 3)
    {
        ans += g[i][i];
    }
    req(i, 1, 3)
    {
        int cur = 0;
        req(j, 1, 3)
        {
            cur += g[i][j];
        }
        if (cur != ans)
        {
            cout << "No" << endl;
            return;
        }
    }
    req(i, 1, 3)
    {
        int cur = 0;
        req(j, 1, 3)
        {
            cur += g[j][i];
        }
        if (cur != ans)
        {
            cout << "No" << endl;
            return;
        }
    }
    int m = 0;
    req(i, 1, 3)
    {
        m += g[i][4 - i];
    }
    if (m != ans)
        cout << "No";
    else
        cout << "Yes";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        chaoweic();
    return 0;
}
