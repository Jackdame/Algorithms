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

bool valueCompareAsc(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

void Solve()
{
    int n, k, count = 0;
    cin >> n >> k;
    char s[n];
    map<char, int> q;
    req(i,0,n-1)
    {
        cin >> s[i];
        q[s[i]]++;
    }
    vector<pair<char, int>> b(q.begin(), q.end());
    sort(b.begin(),b.end(), valueCompareAsc);
    for (int i = b.size() - 1; i >= 0;i--)
    {
        if (k <= 0 || b[i].se <= 2)
            count += b[i].se;
        if(b[i].se >2 && k >0)
            k--; 
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
