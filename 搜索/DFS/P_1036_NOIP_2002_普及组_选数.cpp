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
const int N = 25;
int a[N], ans, n, k;

bool isprime(int x)
{
    if(x==1)
        return false;
    for (int i = 2; i * i <= x;++i)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

void dfs(int now,int sum,int sid)
{
    //已经选择now个数 总和为sum
    //sid是这次选数的起始下标 从a[sid]开始枚举
    if(now==k)
    {
        if(isprime(sum))
        {
            ++ans;
        }
        return;
    }
    // 已经选了now个数 选完后还有k-now-1个数要选
    // 因此a[n-(k-now-1)]是枚举的终点
    req(i,sid,n-k+now+1)
    {
        dfs(now + 1, sum + a[i], i + 1);
    }
    return;
}
void Solve()
{
    cin >> n >> k;
    req(i,1,n)
        cin >> a[i];
    //不降原则
    dfs(0, 0, 1);
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
