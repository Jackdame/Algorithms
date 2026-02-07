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
#define pb push_back
using namespace std;
using LL = long long;
typedef pair<int,int> PII;
typedef pair<long long,long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 2*1e5;
int n, m, k;
vector<int> a(101);
int f[N];
void Solve()
{
    cin >> n >> m >> k;
    m -= n;
    req(i,1,k)
    {
        cin >> a[i];
    }
    LL ans = 0;
    f[0] = 1;
    req(i,0,m-1)
    {
        req(j,1,k)
        {
            if(i+a[j] <m)
                f[i + a[j]] += f[i], f[i + a[j]] %= mod;
            else
                ans += f[i], ans %= mod;
        }
    }
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
