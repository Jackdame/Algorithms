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
    int n,q;
    cin >> n >> q;
    vector<LL> arr(n); //原始数组
    req(i,0,n-1)
    {
        cin >> arr[i];
    }
    vector<LL> diff(n+1,0); //差分数组
    req(i,0,q-1)
    {
        int l,r;
        cin >> l >> r;
        l--; r--;
        diff[l] ++;
        if(r+1 < n)
            diff[r+1]--;
    }
    vector<LL> freq(n);
    LL cur = 0;
    req(i,0,n-1)
    {
        cur += diff[i];
        freq[i] = cur;
    }
    sort(arr.begin(),arr.end());
    sort(freq.begin(),freq.end());

    LL max = 0;
    req(i,0,n-1)
    {
        max += arr[i]*freq[i];
    }
    cout<<max<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
