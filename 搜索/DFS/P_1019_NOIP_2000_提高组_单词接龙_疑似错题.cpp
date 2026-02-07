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
const int N = 30;
int n, vis[N], ans;
string s[N];
char c;

void dfs(const string &tmp)
{
    ans = max(ans,int(tmp.size()));
    req(i,1,n)
    {
        if(vis[i]>=2)
            continue;
        req(j,1,min(tmp.size(),s[i].size()))
        {
            if (tmp.substr(tmp.size()-j) == s[i].substr(0,j))
            {
                ++vis[i];
                dfs(tmp + s[i].substr(j));
                --vis[i];
            }
        }
    }
}
void Solve()
{
    cin >> n;
    req(i,1,n)
    {
        cin >> s[i];
    }
    cin >> c;
    req(i,1,n)
    {
        if(s[i][0] == c)
        {
            ++vis[i];
            dfs(s[i]);
            --vis[i];
        }
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
