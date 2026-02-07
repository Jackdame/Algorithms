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
int n, k, f[201][7];
void Solve()
{
    //典型线性dp问题
    
    cin >> n >> k;
    req(i,1,n)
    {
        f[i][1] = 1;
        f[i][0] = 1;
    }
    req(x,2,k)
    {
        f[1][x] = 0;
        f[0][x] = 0;
    }
    req(i,2,n)
    {
        req(x,2,k)
        {
            if(i>x)
                f[i][x] = f[i - 1][x-1] + f[i - x][x];
            else
                f[i][x] = f[i - 1][x - 1];
        }
    }
    cout << f[n][k];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
