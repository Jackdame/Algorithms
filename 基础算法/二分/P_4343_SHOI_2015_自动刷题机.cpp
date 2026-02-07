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
const int N = 1e5 +7;
int n, k, a[N];
LL l, r, ans1 = -1, ans2 = -1;

LL check(LL x)
{
    int ans = 0;
    LL sum = 0;
    req(i,1,n)
    {
        sum = max(sum + a[i], 0ll);
        if (sum >= x)
            sum = 0, ans++;
    }
    return ans;
}
void Solve()
{
    cin >> n >> k;
    req(i,1,n)
    {
        cin >> a[i];
    }
    l = 1, r = 1e18;
    while(l<=r)
    {
        LL mid = (l + r) / 2;
        if(check(mid) <=k)
        {
            r = mid - 1;
            if(check(mid) == k)
                ans1 = mid;
        }
        else
            l = mid + 1;
    }
    l = 1, r = 1e18;
    while(l<=r)
    {
        LL mid = (l + r) / 2;
        if(check(mid)>=k)
        {
            l = mid + 1;
            if(check(mid) == k)
                ans2 = mid;
        }
        else
            r = mid - 1;
    }
    if(ans1 == -1)
        puts("-1");
    else
        cout << ans1 << " " << ans2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
