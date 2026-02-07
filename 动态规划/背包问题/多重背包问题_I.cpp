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
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define req(i,a,n) for(int i = a; i <= n; ++i)
#define rep(i,a,n) for(int i = a; i >= n; --i)
#define pb push_back
#define int long long
using namespace std;
using LL = long long;
typedef pair<int,int> PII;
typedef pair<long long,long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1010;
int n, m;
int v[N], w[N], s[N];
int f[N][N];
void Solve()
{
    cin >> n >> m;
    req(i,1,n)
    {
        cin >> v[i] >> w[i] >> s[i];
    }
    req(i,1,n)
    {
        req(j,0,m)
        {
            for (int k = 0; k <= s[i] && k * v[i] <= j;k++)
                f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + w[i] * k);    
        }
    }
    cout << f[n][m];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
