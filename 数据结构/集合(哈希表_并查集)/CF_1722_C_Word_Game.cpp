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
const int N = 1e3;
string a[N][N];
void Solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    req(i, 1, 3)
    {
        req(j, 1, n)
        {
            string s;
            cin >> s;
            a[i][j] = s;
            mp[s]++;
        }
    }
    req(i, 1, 3)
    {
        int ans = 0;
        req(j, 1, n)
        {
            if (mp[a[i][j]] == 1)
                ans += 3;
            else if (mp[a[i][j]] == 2)
                ans += 1;
        }
        cout << ans << " ";
    }
    cout << endl;
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
