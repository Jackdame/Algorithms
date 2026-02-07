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
const int N = 1e5;
LL s, k, t1, t2;

LL cal(LL c,LL t)
{
    LL ans = c * t - t1 * c * (c + 1) / 2;
    ans *= k;
    ans += (t - c * t1) / t2;
    return ans;
}

bool check(LL t)
{
    LL c = max(t / t1, 1LL);
    LL res = cal(c, t);
    if(c>1)
    {
        res = max(res, cal(c - 1, t));
    }
    return res >= s;
}
void Solve()
{
    cin >> s >> k >> t1 >> t2;
    LL l = t1, r = t1 + 1 + s / k;
    while(l<=r)
    {
        LL mid = l + r >> 1;
        if(check(mid))
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << l;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
