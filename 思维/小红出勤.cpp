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

bool cmp(int a, int b)
{
    return a < b;
}
void Solve()
{
    int n, p, k, sum = 0;
    cin >> n >> p >> k;
    map<string, int> song;
    vector<string> love(n);
    req(i, 0, n - 1)
    {
        string s;
        int time;
        cin >> s >> time;
        song[s] = time;
        sum += time;
    }
    int min_c = INF;
    req(i, 0, k - 1)
    {
        string s;
        cin >> s;
        min_c = min(min_c, song[s]);
    }

    if (min_c * p < sum)
        cout << -1 << endl;
    else
    {
        int minx = (sum + p - 1) / p;
        int maxx = min(min_c, sum / k);
        if (minx > min_c)
            cout << -1 << endl;
        else
        {
            cout << minx << " " << maxx << endl;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
