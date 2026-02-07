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
int n, m;
string b[N];

void Solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == '.')
            {
                b[i][j] = (i + j) % 2 == 0 ? 'B' : 'W';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
