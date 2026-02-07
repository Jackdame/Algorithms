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
    int n, ansa = 0, ansb = 0;
    string s;
    cin >> n >> s;
    vector<int> a, b;
    req(i, 0, n - 1)
    {
        if (s[i] == 'a')
        {
            a.pb(i);
        }
        else
            b.pb(i);
    }
    auto get_cost = [](vector<int> &pos) -> int // lamba表达式->局部函数
    {
        if (pos.empty())
            return 0;
        int m = pos.size();
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            b[i] = pos[i] - i;
        }
        int mid_val = b[m / 2];

        int current = 0;
        for (int x : b)
        {
            current += abs(x - mid_val);
        }
        return current;
    };

    int costa = get_cost(a);
    int costb = get_cost(b);

    cout << min(costa, costb) << endl;
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
