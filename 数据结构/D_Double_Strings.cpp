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
string s[N];
void Solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<string,bool> strs;
        req(i,0,n-1)
        {
            cin >> s[i];
            strs[s[i]] = true;
        }
        req(i,0,n-1)
        {
            bool found = false;
            req(j,1,s[i].length()-1)
            {
                string pf = s[i].substr(0,j);
                string sf = s[i].substr(j);
                if(strs[pf] && strs[sf])
                {
                    found = true;
                    break;
                }
            }
            cout<<(found ? '1' : '0');
        }
        cout<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Solve();
    return 0;
}
