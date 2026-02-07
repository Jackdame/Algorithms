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
double a, b, c, d;

double ans(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
void Solve()
{
    double l, r, m, x1, x2;
    int s = 0, i;
    cin >> a >> b >> c >> d;
    req(i,-100,99)
    {
        l = i;
        r = i + 1;
        x1 = ans(l);
        x2 = ans(r);
        if(!x1)
        {
            cout << fixed << setprecision(2) << l << " ";
                s++;
        }//判断左端点是否为根
        if(x1*x2<0)
        {
            while(r-l>=0.001)
            {
                m = (l + r) / 2;
                if(ans(m)*ans(r)<=0)
                    l = m;
                else    
                    r = m;
            }
            cout << fixed << setprecision(2) << r << " ";
            s++;
        }
        if(s==3)
            break;
        
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
