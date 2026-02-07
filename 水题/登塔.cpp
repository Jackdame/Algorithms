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
    int n,strong = 0,plus = 0,flash = 0;
    LL damage = 0;
    cin >> n;
    vector<int> a(n);
    req(i,0,n-1)
    {
        cin >> a[i];
    }
    req(i,0,n-1)
    {
        if(a[i] == 1)
        {
            if((i>1 &&(a[i-1]==2 || a[i-2] == 2) ) || ((i==1) && a[0]==2))
            {
                damage += 9;
            }
            else
                damage += 6;
        }
        else if(a[i] == 3)
        {
            flash++;
        }
        else if(a[i] == 4)
        {
            plus++;
        }
        damage += flash * 3 + plus * flash * 2;
    }
    cout << damage;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
