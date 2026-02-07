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
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, n, cnt = 0;
        cin >> x >> y >> n;
        vector<PII> a(n + 1);
        int ofx[] = {1, 1, -1, -1, 2, 2, -2, -2};
        int ofy[] = {2, -2, 2, -2, 1, -1, 1, -1};
        map<PII, bool> vis;
        req(i,1,n)
        {
            int xm, ym;
            cin >> xm >> ym;
            req(j, 0, 7)
            {
                int nx = xm + ofx[j];
                int ny = ym + ofy[j];
                vis[ {nx, ny} ] = true;
            }
        }
        int ofx1[] = {1, 1, 1, 0, -1, -1, -1, 0};
        int ofy1[] = {1, 0, -1, -1, -1, 0, 1, 1};
        req(i,0,7)
        {
            int nx = x + ofx1[i];
            int ny = y + ofy1[i];
            if(vis.count({nx,ny}))
                cnt++;
        }
        if(cnt!=8)
            cout << "C" << endl;
        else 
        {
            if(vis.count({x,y}))
            {
                cout << "B" << endl;
            }
            else
            {
                cout << "A" << endl;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
