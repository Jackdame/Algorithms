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
const int N = 1007;
int n, ans = -1;
int a[N], dp1[N], dp2[N];//最长上升下降
void Solve()
{
    cin >> n;
    req(i,1,n)
    {
        cin>>a[i];
    }
    req(i,1,n)
    {
        req(j,0,i-1)
        {
            if(a[j]<a[i])
            {
                dp1[i] = max(dp1[i], dp1[j] + 1);
            }
        }
    }

    rep(i,n,1)
    {
        rep(j,n+1,i+1)
        {
            if(a[j]<a[i])
            {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }

    req(i,1,n)
    {
        ans = max(dp1[i] + dp2[i] - 1, ans);
    }
    cout << n - ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
