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
    int t;
    cin >> t;
    while(t--)
    {
        int n, idx = 0;
        cin >> n;
        vector<int> a(n);
        req(i,0,n-1)
        {
            cin >> a[i];
        }
        req(i,0,n-1)
        {
            if(a[i]>=a[idx])
            {
                idx = i;
            }
            
        }
        idx += 1;
        if((n%2 == 0 && (idx == n/2 || idx == n/2 +1)) || n == 1)
        {
            cout << "Win!" << endl;
        }
        else if(n%2 != 0 && (idx == (n+1)/2))
        {
            cout << "Lose!" << endl;
        }
        else 
            cout << "Draw!" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
