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
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define req(i,a,n) for(int i = a; i <= n; ++i)
#define pb push_back
using namespace std;
using LL = long long;
typedef pair<int,int> PII;
typedef pair<long long,long long> PLL;
const int INF = 1e9;
const LL mod = 1e9 + 7;
const int N = 510;
int n;
int a[N][N];
int f[N][N];
void Solve()
{
    cin >> n;
    req(i,1,n)
    {
        req(j,1,i)
        {
            cin >> a[i][j];
        }
    }
    req(i,1,n)
    {
        req(j,0,i+1)
        {
            f[i][j] = -INF;
        }
    }
    f[1][1] = a[1][1];
    req(i,2,n)
    {
        req(j,1,i)
        {
            f[i][j] = max(f[i - 1][j - 1] + a[i][j], f[i - 1][j] + a[i][j]);
        }
    }
    int res = -INF;
    req(i,1,n)
    {
        res = max(res, f[n][i]);
    }
    cout << res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
