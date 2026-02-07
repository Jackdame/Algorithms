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
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 2), up(n + 2, 0), down(n + 2, 0), ini1(n + 2), ini2(n + 2);
    req(i, 1, n)
    {
        cin >> a[i];
    }
    req(i, 2, n - 1)
    {
        if (a[i] > a[i + 1] && a[i] > a[i - 1])
            up[i] = 1;
        else if (a[i] < a[i + 1] && a[i] < a[i - 1])
            down[i] = 1;
    }
    req(i, 1, n)
    {
        ini1[i] = ini1[i - 1] + up[i];
        ini2[i] = ini2[i - 1] + down[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int upg = ini1[r - 1] - ini1[l];
        int downg = ini2[r - 1] - ini2[l];
        int dan = a[l] - a[l + 1], dan1 = a[r - 1] - a[r];
        if (upg == 1 && downg == 0 && dan < 0 && dan1 > 0)
        {
            cout << 't' << endl;
        }
        else if (downg == 1 && upg == 0 && dan > 0 && dan1 < 0)
        {
            cout << 'v' << endl;
        }
        else if (upg == 0 && downg == 0)
        {
            if (dan > 0)
                cout << "d" << endl;
            else
                cout << "u" << endl;
        }
        else
            cout << "?" << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
