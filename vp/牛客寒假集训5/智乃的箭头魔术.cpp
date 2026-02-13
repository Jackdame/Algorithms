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
string s1 = "0112233445142015320125410214530214510214102302142025101203201451451522302514203214510021454101002532";
string s = "012345";
void chaoweic()
{
    int cur = 0;
    for (auto c : s1)
    {
        if (c == '0')
        {
            if (cur == 0)
                cout << 3, cur = 3;
            else if (cur == 1)
                cout << 2, cur = 2;
            else if (cur == 2)
                cout << 1, cur = 1;
            else if (cur == 3)
                cout << 0, cur = 0;
        }
        else if (c == '1')
        {
            if (cur == 0)
                cout << 0, cur = 0;
            else if (cur == 1)
                cout << 3, cur = 3;
            else if (cur == 2)
                cout << 2, cur = 2;
            else if (cur == 3)
                cout << 1, cur = 1;
        }
        else if (c == '2')
        {
            if (cur == 0)
                cout << 1, cur = 1;
            else if (cur == 1)
                cout << 0, cur = 0;
            else if (cur == 2)
                cout << 3, cur = 3;
            else if (cur == 3)
                cout << 2, cur = 2;
        }
        else if (c == '3')
        {
            if (cur == 0)
                cout << 2, cur = 2;
            else if (cur == 1)
                cout << 1, cur = 1;
            else if (cur == 2)
                cout << 0, cur = 0;
            else if (cur == 3)
                cout << 3, cur = 3;
        }
        else if (c == '4')
        {
            if (cur == 0)
                cout << 1, cur = 1;
            else if (cur == 1)
                cout << 2, cur = 2;
            else if (cur == 2)
                cout << 3, cur = 3;
            else if (cur == 3)
                cout << 0, cur = 0;
        }
        else if (c == '5')
        {
            if (cur == 0)
                cout << 3, cur = 3;
            else if (cur == 1)
                cout << 0, cur = 0;
            else if (cur == 2)
                cout << 1, cur = 1;
            else if (cur == 3)
                cout << 2, cur = 2;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        chaoweic();
    return 0;
}
