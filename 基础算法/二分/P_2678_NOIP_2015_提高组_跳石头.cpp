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
const int N = 1e6;
int d, n, m, a[N], l, r, mid, ans;
bool check(int x)
{
    int total = 0, i = 0, now = 0;
    while(i<n+1)
    {
        i++;
        if (a[i] - a[now] < x)
            total++;
        else
            now = i;
    }
    if(total>m)
        return false;
    else
        return true;
}
void Solve()
{
    cin >> d >> n >> m;
    req(i,1,n)
    {
        cin >> a[i];
    }
    a[n + 1] = d;
    l = 1;
    r = d;
    while(l<=r)
    {
        mid = (l + r) / 2;
        if(check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
