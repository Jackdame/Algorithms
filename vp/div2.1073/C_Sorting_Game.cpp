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
    cin >> n;
    string s;
    cin >> s;
    bool sorted = true;
    req(i, 0, n - 2)
    {
        if (s[i] > s[i + 1])
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
    {
        cout << "Bob" << endl;
        return;
    }
    int cnt0 = 0;
    for (char c : s)
    {
        if (c == '0')
            cnt0++;
    }
    vector<int> ans;
    req(i, 0, cnt0 - 1)
    {
        if (s[i] == '1')
        {
            ans.pb(i + 1);
        }
    }
    req(i, cnt0, n - 1)
    {
        if (s[i] == '0')
        {
            ans.pb(i + 1);
        }
    }
    cout << "Alice\n"
         << (int)ans.size() << endl;
    req(i, 0, (int)ans.size() - 1)
    {
        cout << ans[i] << (i == (int)ans.size() - 1 ? "" : " ");
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
