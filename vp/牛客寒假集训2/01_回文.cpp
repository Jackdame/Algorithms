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
const int N = 1e4;
int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
void chaoweic()
{
    int n, m, cnt0 = 0, cnt1 = 0;
    cin >> n >> m;
    vector<string> g(n);
    req(i, 0, n - 1)
    {
        cin >> g[i];
        req(j, 0, m - 1)
        {
            if (g[i][j] == '1')
                cnt1++;
            else
                cnt0++;
        }
    }
    req(i, 0, n - 1)
    {
        req(j, 0, m - 1)
        {
            if (g[i][j] == '1')
            {
                if (cnt1 > 1)
                    printf("Y");
                else
                    printf("N");
            }
            else
            {
                if (cnt0 > 1)
                    printf("Y");
                else
                    printf("N");
            }
        }
        printf("\n");
    }
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
