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
    int n,min = N,max = 0,idx1 = 1,idx2 = 1;
    cin >> n;
    vector<int> a(n+1);
    req(i,1,n)
    {
        cin >> a[i];
        if(min>a[i])
        {
            min = a[i];
            idx1 = i;
        }
        if(max<a[i])
        {
            max = a[i];
            idx2 = i;
        }
    }
    if(idx1>idx2)
    {
        cout << idx2 << " " << idx1 << " " << max - min;
    }
    else
    {
        cout << idx1 << " " << idx2 << " " << max - min;
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
