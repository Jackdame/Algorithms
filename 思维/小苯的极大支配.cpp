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
#define fi first
#define se second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pb push_back
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;

void Solve()
{
    int n;
    cin >> n;
    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    vector<LL> pre(n + 1);
    vector<vector<int>> g(n + 1);
    vector<int> fre;

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + cnt[i];
        if (cnt[i])
        {
            if (g[cnt[i]].empty())
            {
                fre.pb(cnt[i]);
            }
            g[cnt[i]].pb(i);
        }
    }
    LL mx = 0;
    for (int c : fre)
    {
        int x = g[c].back();
        LL cur = c + pre[x - 1];
        LL ex = 0;
        for (int f : fre)
        {
            if (f < c)
                continue;
            auto grp = g[f];
            int count = 0;
            if (f == c)
                count = grp.size() - 1;
            else
            {
                auto it = lower_bound(all(grp), x);
                count = distance(grp.begin(), it);
            }
            if (count > 0)
            {
                ex += (LL)count * (f - c + 1);
            }
        }
        cur -= ex;
        mx = max(mx, cur);
    }
    cout << n - mx << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int _ = 1; _ <= t; ++_)
    {
        Solve();
    }
    return 0;
}
