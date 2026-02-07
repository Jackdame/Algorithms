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
const int N = 110;
int n, m;
int v[N][N], w[N][N], s[N];
int f[N];

void Solve()
{
    cin >> n >> m;
    req(i,1,n)
    {
        cin >> s[i];
        req(j,0,s[i]-1)
        {
            cin >> v[i][j] >> w[i][j];
        }
    }
    req(i,1,n)
    {
        rep(j,m,0)
        {
            req(k,0,s[i]-1)
            {
                if(v[i][k]<=j)
                    f[j] = max(f[j], f[j - v[i][k]] + w[i][k]);
            }
        }
    }
    cout << f[m];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
