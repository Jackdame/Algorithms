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
int g[5][5] = {
    {0, 2, 1, 1, 2}, 
    {1, 0, 2, 1, 2}, 
    {2, 1, 0, 2, 1},
    {2, 2, 1, 0, 1}, 
    {1, 1, 2, 2, 0}  
};

void Solve()
{
    int n,t1,t2,cntA = 0,cntB = 0;
    cin >> n >> t1 >> t2;
    vector<int> a(t1);
    vector<int> b(t2);
    req(i,0,t1-1)
    {
        cin >> a[i];
    }
    req(i,0,t2-1)
    {
        cin >> b[i];
    }
    req(i,0,n-1)
    {
        if(g[a[i%t1]][b[i%t2]] == 2)
        {
            cntB++;
        }
        else if (g[a[i % t1]][b[i % t2]] == 1)
        {
            cntA++;
        }
    }
    cout << cntA << " " << cntB;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
