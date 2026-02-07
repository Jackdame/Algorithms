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
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define rep(a, n) for (int i = a; i <= n; ++i)
#define pb push_back
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;

void Solve()
{
    bool eq = false;
    string s1, s2;
    cin >> s1 >> s2;
    rep(0, s1.size() - 1)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        if (s1[i] > s2[i])
        {
            cout << 1;
            break;
        }
        else if (s1[i] < s2[i])
        {
            cout << -1;
            break;
        }
        if (i == s1.size() - 1)
        {
            if (s1[i] == s2[i])
            {
                eq = true;
            }
        }
    }
    if (eq)
        cout << 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
