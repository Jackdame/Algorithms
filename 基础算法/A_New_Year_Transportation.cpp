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
using namespace std;
using LL = long long;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;

void Solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> q(n + 1);
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> q[i];
    }
    int pos = 1;
    while (pos < m)
    {
        pos = pos + q[pos];
    }
    if (pos == m)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
