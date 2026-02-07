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

void Solve()
{
    LL n, m;
    cin >> n >> m;
    vector<LL> a(n + 1);
    req(i,1,n)
    {
        cin >> a[i];
    }
    LL q = 0, mx = 0;
    vector<LL> b;
    req(i,2,n)
    {
        if(a[i-1]>=a[i])
        {
            q++;
            b.pb(a[i - 1] - a[i] + 1);
            mx = max(mx, a[i - 1] - a[i] + 1);
        }
    }
    if(q>m)
    {
        cout << -1 << endl;
        return;
    }

    if(q==0)
    {
        cout << 0 << endl;
        return;
    }
    LL l = 0, r = mx + 1;
    while(l+1<r)
    {
        LL mid = l + ((r - l) / 2);//当前尝试的长度
        LL ans = 0;//总操作次数
        for(int x : b) //计算以mid为步长的总操作次数
        {
            ans += ceil((x * 1.0) / (mid * 1.0));
        }//向上取整
        if (ans <= m)
            r = mid;//可行，尝试更小的长度
        else
            l = mid;
    }
    cout<<r<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}
