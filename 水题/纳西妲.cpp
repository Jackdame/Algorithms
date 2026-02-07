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
const int N = 1e5;

void Solve()
{
    int l = 0, r = 0;
    string s;
    cin >> s;
    req(i,0,s.size()-2)
    {
        if(s[i] == 'W' && s[i+1] == 'N')
            r++;
        else if (s[i] == 'N' && s[i + 1] == 'E')
            r++;
        else if (s[i] == 'E' && s[i + 1] == 'S')
            r++;
        else if (s[i] == 'S' && s[i + 1] == 'W')
            r++;
        else if(s[i] == 'W' && s[i+1] == 'S')
            l++;
        else if (s[i] == 'S' && s[i + 1] == 'E')
            l++;
        else if (s[i] == 'E' && s[i + 1] == 'N')
            l++;
        else if (s[i] == 'N' && s[i + 1] == 'W')
            l++;
    }
    cout << ((r > l) ? "CW" : "CCW") << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}
