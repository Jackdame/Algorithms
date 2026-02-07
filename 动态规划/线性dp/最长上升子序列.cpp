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
const int N = 1010;
int n;
int a[N], f[N];
void Solve()
{
    cin >> n;
    req(i,1,n)
    {
        cin >> a[i];
    }
    req(i,1,n)
    {
        f[i] = 1;
        req(j,1,i-1)
        {
            if(a[j]<a[i])
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    int res = 0;
    req(i, 1, n){
        res = max(res, f[i]);
    }
    cout << res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
