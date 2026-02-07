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
string a, b;
int f[N][N];
void Solve()
{
    cin >> n >> m;
    cin >> a >> b;
    req(i,1,n)
    {
        req(j,1,m)
        {
            f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            if(a[i] == b[j])
                f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
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
