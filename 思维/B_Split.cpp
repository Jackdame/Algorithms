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
    int n;
    cin >> n;
    vector<int> a(2*n);
    req(i,0,2*n-1)
    {
        cin >> a[i];
    }
    vector<int> cnt(2 * n + 1);
    for(auto &x : a)
    {
        cnt[x]++;
    }
    int x = 0, y = 0, z = 0;
    req(i,1,2*n)
    {
        if(cnt[i]==0)
            continue;
        if(cnt[i]&1)
            x++;
        else if(cnt[i]%4)
            y++;
        else    
            z++;
    }
    int ans = x + 2 * y + 2 * z;
    if((z&1) && x==0)
        ans -= 2;
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        Solve();
    return 0;
}
