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
        int n, l, r;
        LL cnt = 0;
        cin >> n >> l >> r;
        vector<int> a(n);
        req(i,0,n-1)
            cin >> a[i];
        sort(a.begin(), a.end());
        //排序后获得单调性 以应用双指针
        int j = n - 1, k = n - 1;
        req(i,0,n-2)
        {
            //找到满足>=l的最小x 其实可以用二分
            j = max(j, i + 1);
            while(j>i && a[i] + a[j] >= l)
                j--;
            //找到满族<=r的最大x
            k = max(k, i + 1);
            while(k>i && a[i]+ a[k] >r)
                k--;
            if(k>j)
                cnt += (k - j);
        }
        cout << cnt << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
