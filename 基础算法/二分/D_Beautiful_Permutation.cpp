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

LL query(int type, int l, int r)
{
    LL x;
    cout << type << " " << l << " " << r << flush << endl;
    cin >> x;
    return x;
}
void chaoweic()
{
    int n;
    cin >> n;
    LL sum = query(2, 1, n);
    sum -= (n * (n + 1)) / 2;
    LL dif = sum - 1;
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        LL v1 = query(1, 1, mid);
        LL v2 = query(2, 1, mid);
        if (v1 < v2)
            r = mid;
        else
            l = mid + 1;
    }
    cout << "!" << " " << l << " " << dif + l << flush << endl;
}

signed main()
{
    // freopen("x.in","r",stdin);
    // freopen("x.out","w",stdout);
    int t = 1;
    cin >> t;
    while (t--)
        chaoweic();
    return 0;
}