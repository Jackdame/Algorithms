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
int n;
string s;
char dfs(int l, int r)
{
    if (l == r)
    {
        if (s[l] == '0')
        {
            cout << "B";
            return 'B';
        }
        else
        {
            cout << "I";
            return 'I';
        }
    }
    int mid = (l + r) >> 1;
    char L = dfs(l, mid), R = dfs(mid + 1, r);
    if (L == 'B' && R == 'B')
    {
        cout << 'B';
        return 'B';
    }
    else if (L == 'I' && R == 'I')
    {
        cout << 'I';
        return 'I';
    }
    else
    {
        cout << "F";
        return 'F';
    }
}
void Solve()
{
    cin >> n;
    cin >> s;
    s = ' ' + s;
    dfs(1, 1 << n);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        Solve();
    return 0;
}
