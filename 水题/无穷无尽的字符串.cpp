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
    if(n%3==0)//c
    {
        if ((m - n) % 3 == 0)
        {
            cout << (m - n) / 3 << " " << (m - n) / 3 << " " << (m - n) / 3 + 1;
        }
        else if ((m - n) % 3 == 1)
        {
            cout << (m - n) / 3 +1 << " " << (m - n) / 3  << " " << (m - n) / 3 + 1;
        }
        else
        {
            cout << (m - n) / 3 + 1 << " " << (m - n) / 3 + 1 << " " << (m - n) / 3 + 1;
        }
    }
    else if(n%3==2)//b
    {
        if((m-n)%3==0)
        {
            cout << (m - n) / 3  << " " << (m - n) / 3 +1 << " " << (m - n) / 3;
        }
        else if((m-n)%3==1)
        {
            cout << (m - n) / 3 << " " << (m - n) / 3 + 1 << " " << (m - n) / 3 +1;
        }
        else
        {
            cout << (m - n) / 3 +1  << " " << (m - n) / 3 + 1 << " " << (m - n) / 3 + 1;
        }
    }
    else//a
    {
        if((m-n)%3==0)
        {
            cout << (m - n) / 3 + 1 << " " << (m - n) / 3 <<" "<< (m - n) / 3;
        }
        else if((m-n)%3==1)
        {
            cout << (m - n) / 3 + 1 << " " << (m - n) / 3+1 << " " << (m - n) / 3;
        }
        else
        {
            cout << (m - n) / 3 + 1 << " " << (m - n) / 3 + 1 << " " << (m - n) / 3 + 1;
        }
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
