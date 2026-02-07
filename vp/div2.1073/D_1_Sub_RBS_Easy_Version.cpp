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
    int n, idx = -1;
    cin >> n;
    string s;
    cin >> s;
    req(i, 0, n - 2)
    {
        if (s[i] == ')' && s[i + 1] == '(')
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        cout << "-1\n";
        return;
    }
    bool found = false;
    req(i, idx + 2, n - 1)
    {
        if (s[i] == '(')
        {
            found = true;
            break;
        }
    }
    cout << (found ? n - 2 : -1) << endl;
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
