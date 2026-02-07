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
    int n, cnt = 0, cur = 0;
    cin >> n;
    vector<int> a(n);
    req(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(all(a));
    req(i, 0, n - 2)
    {
        if (a[i + 1] - a[i] == 1)
        {
            cur++;
            if (cur > cnt)
                cnt = cur;
        }
        else if (a[i + 1] == a[i])
            continue;
        else
            cur = 0;
    }
    cout << cnt + 1 << endl;
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
