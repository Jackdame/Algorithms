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
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define req(i, a, n) for (int i = a; i <= n; ++i)
#define rep(i, a, n) for (int i = a; i >= n; --i)
#define pb push_back
#define int long long
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;
string a = "*****...******...***...**...**....**", b = "**......**.......****..**...**....**", c1 = "*****...**.......**.**.**...**....**", d = "...**...**.......**..****...**....**", e = "*****...******...**...***...********";

void Solve()
{
    int n;
    cin >> n;
    req(i, 1, n)
    {
        for (auto c : a)
        {
            if (c == '*')
            {
                req(i, 1, n) cout << "*";
            }
            else
            {
                req(i, 1, n) cout << '.';
            }
        }
        cout << endl;
    }
    req(i, 1, n)
    {
        for (auto c : b)
        {
            if (c == '*')
            {
                req(i, 1, n) cout << "*";
            }
            else
            {
                req(i, 1, n) cout << '.';
            }
        }
        cout << endl;
    }
    req(i, 1, n)
    {
        for (auto c : c1)
        {
            if (c == '*')
            {
                req(i, 1, n) cout << "*";
            }
            else
            {
                req(i, 1, n) cout << '.';
            }
        }
        cout << endl;
    }
    req(i, 1, n)
    {
        for (auto c : d)
        {
            if (c == '*')
            {
                req(i, 1, n) cout << "*";
            }
            else
            {
                req(i, 1, n) cout << '.';
            }
        }
        cout << endl;
    }
    req(i, 1, n)
    {
        for (auto c : e)
        {
            if (c == '*')
            {
                req(i, 1, n) cout << "*";
            }
            else
            {
                req(i, 1, n) cout << '.';
            }
        }
        cout << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
