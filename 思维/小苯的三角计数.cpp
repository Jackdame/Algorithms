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
    vector<PLL> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].fi >> v[i].se;
    sort(all(v));
    LL ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].se >= 3)
            ans++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].se >= 2)
        {
            LL a = v[i].fi;
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    if (2 * a > v[j].fi)
                        ans++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int k = i + 2;
        for (int j = i + 1; j < n; j++)
        {
            while (k < n && v[i].fi + v[j].fi > v[k].fi)
                k++;
            ans += max(0, k - j - 1);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}
