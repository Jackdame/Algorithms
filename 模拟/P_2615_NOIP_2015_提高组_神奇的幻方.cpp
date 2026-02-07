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
int a[40][40], x, y = 0;
void Solve()
{
    memset(a, 0, sizeof a);
    int n;
    cin >> n;
    x = (n-1)/2;
    a[y][x] = 1;
    req(k,2,n*n)
    {
        if(y == 0 && x!=n-1)
        {
            y = n - 1;
            x ++;
            a[y][x] = k;
        }
        else if(x == n-1 && y!=0)
        {
            x = 0;
            y--;
            a[y][x] = k;
        }
        else if (y == 0 && x == n - 1)
        {
            y++;
            a[y][x] = k;
        }
        else if(y!=0 && x!=n-1)
        {
            if(a[y-1][x+1] == 0)
            {
                y--;
                x++;
                a[y][x] = k;
            }
            else
            {
                y++;
                a[y][x] = k;
            }
        }
    }
    req(i,0,n-1)
    {
        req(j,0,n-1)
        {
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
