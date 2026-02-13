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

void chaoweic()
{
    int n;
    LL ans = 0;
    cin >> n;
    vector<int> a(n + 1);
    req(i, 1, n)
    {
        cin >> a[i];
    }
    int g = sqrt(n);
    req(ai, 1, g)
    {
        req(j, 1, n)
        {
            int tar = j - a[j] * ai;
            if (tar >= 1 && a[tar] == ai)
                ans++;
        }
    }
    req(i, 1, n)
    {
        if (a[i] > g)
        {
            for (int aj = 1;; ++aj)
            {
                int tar = i + a[i] * aj;
                if (tar > n)
                    break;
                if (a[tar] == aj)
                    ans++;
            }
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        chaoweic();
    return 0;
}
