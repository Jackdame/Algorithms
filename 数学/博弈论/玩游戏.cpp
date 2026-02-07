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
int ans = 1e9;

string Solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    req(i,1,n)
    {
        cin >> a[i];
    }
    if(a[1] == 1)
    {
        return "HowarLi";  
    }
    req(i,1,n)
    {
        int cnt = 1;
        if(a[i]&1)
            a[i] = 3 * a[i] + 1;
        else    
            a[i] /= 2;
        while(a[i]>1)
        {
            if (a[i] & 1)
                a[i] = 3 * a[i] + 1;
            else
                a[i] /= 2;
            cnt++;
        }
        cnt = 2 * cnt - 1 + (i == 1);
        ans = min(ans, cnt);
    }
    if(ans%2==0)
        return "HowarLi";
    else
        return "Elo";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cout<<Solve();
    return 0;
}
