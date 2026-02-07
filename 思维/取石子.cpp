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
    int n, k,s,idx = -1;
    cin >> n >> k;
    vector<int> a(n);
    req(i,0,n-1)
    {
        cin >> a[i];
    }
    cin >> s;
    s--;
    int now = (s + k) % n;
    int bg = mod;
    do
    {
        if(a[now]<bg)
        {
            bg = a[now];//记录最小值
            idx = now;//对应坐标
        }
        now = (now + k) % n;
    } while (now != (s+k)%n);
    cout << idx + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
