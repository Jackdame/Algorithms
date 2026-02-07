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
    freopen("ans.txt", "w", stdout);
    LL ans = 0;
    req(n,1,N)
    {
        req()

        for (int i = 1; i <= n; ++i)
            for (int j = i + 1; j <= n; ++j)
            {
                ans += a[i] ^ a[j];
            }
    
    }

    
    
}

int main()
{
    Solve();
}
//尝试打表