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
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        req(i, 1, (a + b) / 2) cout << "01";
    }
    else if (a > b)
    {
        int k = b + 1, v = a / k, w = a % k;
        req(i, 0, k - 1)
        {
            int cnt = v + (i < w);
            req(j, 0, cnt - 1) cout << '0';
            if (i < b)
                cout << '1';
        }
    }
    else if (a < b)
    {
        int k = a + 1, v = b / k, w = b % k;
        req(i, 0, k - 1)
        {
            int cnt = v + (i < w);
            req(j, 0, cnt - 1) cout << '1';
            if (i < a)
                cout << '0';
        }
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
        chaoweic();
    return 0;
}
