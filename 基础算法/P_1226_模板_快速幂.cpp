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

LL quickpow(int a, int b, int p)
{
    LL res = 1 % p;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = a * (LL)a % p;
        b >>= 1;
    }
    return res;
}
void Solve()
{
    int a, b, p;
    cin >> a >> b >> p;
    cout << a << "^" << b << " " << "mod" << " " << p << "=" << quickpow(a, b, p) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
