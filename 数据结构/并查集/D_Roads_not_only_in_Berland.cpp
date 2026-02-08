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
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e3 + 5;
int s[N], a[N], b[N], c[N], d[N];
int m = 0;
void init()
{
    for (int i = 1; i < N; ++i)
        s[i] = i;
}
int find_set(int x)
{
    if (x != s[x])
        s[x] = find_set(s[x]);
    return s[x];
}

void chaoweic()
{
    init();
    int n, ans = 0, t = 1;
    cin >> n;
    req(i, 1, n - 1)
    {
        int u, v;
        cin >> u >> v;
        int x = find_set(u), y = find_set(v);
        if (x != y)
            s[x] = s[y];
        else
        {
            ++m;
            a[m] = u;
            b[m] = v;
        }
    }
    if (m == 0)
    {
        cout << 0 << endl;
        return;
    }
    set<int> st;
    req(i, 1, n)
    {
        req(j, 1, n)
        {
            int x = find_set(i), y = find_set(j);
            if (x != y && (!st.count(x) || !st.count(y)))
            {
                ans++;
                c[t] = x, d[t] = y;
                t++;
                st.insert(x);
                st.insert(y);
            }
        }
    }
    cout << ans << endl;
    req(i, 1, m)
    {
        printf("%d %d %d %d\n", a[i], b[i], c[i], d[i]);
    }
}

signed main()
{
    // freopen("x.in","r",stdin);
    // freopen("x.out","w",stdout);
    int t = 1;
    // cin >> t;
    while (t--)
        chaoweic();
    return 0;
}