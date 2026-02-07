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
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), nxt(n + 1);
    int cnt = 0;
    req(i, 1, n)
    {
        cin >> a[i];
        if (a[i] > 0)
            cnt++;
        nxt[i] = max(nxt[i - 1], a[i] + i);
    }
    if (cnt <= k)
    { // 显然此时将所有白块染色，直接完成
        cout << 0 << endl;
        return;
    }
    auto check = [&](int mid) -> bool
    {
        int i = 1; // 从1开始从左到右染色
        while (i <= n && a[i] == 0)
        {
            i++;
        } // i指向当前的白块
        int ans = 1, time = 0;
        while (i <= n)
        {
            time++;
            i = nxt[i]; // 跳到最远的位置
            if (i >= n) // 已完成所有染色
                break;
            if (i == nxt[i])
            {
                while (i <= n && i == nxt[i])
                    i++;
                if (i <= n)
                {
                    time = 0;
                    ans++;
                }
            }
            else
            {
                if (time == mid)
                {
                    i++;
                    while (i <= n && a[i] == 0) // 避开黑块
                    {
                        i++;
                    }
                    if (i <= n)
                    {
                        time = 0;
                        ans++;
                    }
                }
            }
        }
        return ans <= k;
    };
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    if (!check(l))
    {
        l = -1;
    }
    cout << l << endl;
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
