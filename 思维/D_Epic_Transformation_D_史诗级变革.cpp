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
        priority_queue<pair<int, int>> q;
        int n;
        cin >> n;
        map<int, int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        for (auto [x, y] : v)
        {
            q.push({y, x});
        }
        int sz = n;
        while (q.size() >= 2)
        {
            auto [cnt1, x1] = q.top();
            q.pop();
            auto [cnt2, x2] = q.top();
            q.pop();
            cnt1--;
            cnt2--;
            sz -= 2;
            if (cnt1)
            {
                q.push({cnt1, x1});
            }
            if (cnt2)
            {
                q.push({cnt2, x2});
            }
        }
        cout << sz << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
