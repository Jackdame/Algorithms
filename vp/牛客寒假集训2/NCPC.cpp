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
    vector<int> a(n + 1);
    map<int, int> mp;
    req(i, 1, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int mx = *max_element(all(a));
    if (mp[mx] % 2 == 0)
    {
        req(i, 1, n)
        {
            if (a[i] == mx)
                cout << '0';
            else
                cout << '1';
        }
    }
    else
    {
        req(i, 1, n)
        {
            if (a[i] == mx)
                cout << 1;
            else
                cout << 0;
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
