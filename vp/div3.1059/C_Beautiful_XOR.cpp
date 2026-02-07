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
    int a, b, cnt = 0;
    cin >> a >> b;
    int ain = a;
    vector<int> ca(30, 0), cb(30, 0), ans;
    req(i, 0, 29)
    {
        if ((a >> i) & 1)
            ca[i]++;
        if ((b >> i) & 1)
            cb[i]++;
    }
    req(i, 0, 29)
    {
        if (ca[i] != cb[i])
        {
            int x = pow(2, i);
            if (x > ain)
            {
                cout << -1 << endl;
                return;
            }
            a = a ^ x;
            ans.pb(x);
            cnt++;
        }
        if (a == b)
        {
            break;
        }
    }
    cout << cnt << endl;
    for (auto m : ans)
    {
        cout << m << " ";
    }
    cout << endl;
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
