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
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
const int INF = 0x3f3f3f3f;
const LL mod = 998244353;
const int N = 1e5;

void Solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        LL k;
        cin >> n >> k;
        vector<LL> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                k = k * pow(2, a[i]);
            else
                k = k / pow(2, a[i]);
        }
        cout << (k % mod) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
