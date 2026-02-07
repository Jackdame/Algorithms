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
int a[100],b[100],c[100],d[100];//行列对角线
int tol, n;
int print()
{
    if(tol<=2)
    {
        req(k,1,n)
        {
            cout << a[k] << " ";
            cout << endl;
        }
    }
    tol++;
}
void dfs(int i)
{
    if(i>n)
    {
        print();
        return;
    }
    else
    {
        req(j,1,n)
        {
            if((!b[j])&&(!c[i+j])&&(!d[i-j+n]))
            {
                a[i] = j;
                b[j] = 1;
                c[i + j] = 1;
                d[i - j + n] = 1;
                dfs(i + 1);
                b[j] = 0;
                c[i + j] = 0;
                d[i - j + n] = 0;
                //回溯
            }
        }
    }
}
void Solve()
{
    cin >> n;
    dfs(1);
    cout << tol;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
