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
int w = 0, l = 0, a, b;
string s;
char m;
void work(int lim)
{
    for(char p : s)
    {
        if(p == 'W')
            a++;
        else if(p == 'L')
            b++;
        if(max(a,b)>=lim && abs(a-b)>=2){
            cout << a << ":" << b << endl;
            a = 0;
            b = 0;
        }
    }
    cout << a << ":" << b << endl;
    a = 0;
    b = 0;
    cout << endl;
}
void Solve()
{
    
    while(cin >> m)
    {
        if (m == 'E')
            break;
        s += m;
    }
    work(11), work(21);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
