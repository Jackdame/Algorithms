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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    req(i,0,n-1)
        cin>>a[i];
    req(i,0,m-1)
        cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while(!a.empty()&& !b.empty())
    {
        int am = a.back(), bm = b.back();
        if(am>bm)
        {
            a[a.size() - 1] = am - bm;
            b.pop_back();
        }
        else if(bm>am)
        {
            b[b.size() - 1] = bm - am;
            a.pop_back();
        }
        else
        {
            a.pop_back();
            b.pop_back();
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
    if(a.empty() && !b.empty())
        cout << "Bob";
    else if(b.empty() && !a.empty())
        cout << "Alice";
    else
        cout << "draw";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
