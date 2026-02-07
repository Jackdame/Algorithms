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
const int N = 1e5;

void Solve()
{
    int n,c1 = 0,c2 = 0,c3 = 0;
    cin >> n;
    req(i,1,n)
    {
        int a;
        cin >> a;
        c1 += a;
    }
    req(i,1,n-1)
    {
        int b;
        cin >> b;
        c2 += b;
    }
    req(i,1,n-2)
    {
        int c;
        cin >> c;
        c3 += c;
    }
    cout<<c1-c2<<endl;
    cout<<c2-c3<<endl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
