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
    int n;
    cin >> n;
    map<int, set<int>> solved;
    map<int, int> ballon;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool fsolve = (solved[a].find(b) == solved[a].end());
        if (!fsolve)
        {
            cout << 0 << endl;
            continue;
        }
        solved[a].insert(b);
        if (c < 240)
        {
            ballon[a]++;
            cout << b << endl;
        }
        else
        {
            if (ballon[a] < 3)
            {
                ballon[a]++;
                cout << b << endl;
            }
            else
                cout << 0 << endl;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
