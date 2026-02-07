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
#include <unordered_set>
using namespace std;
using LL = long long;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;
typedef pair<int, int> PII;

int greedy(int n, int m)
{
    if (n >= m)
        return n - m;
    int steps = 0;
    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m++;
        }
        steps++;
    }
    steps += (n - m);
    return steps;
}
void Solve()
{
    int n, m;
    cin >> n >> m;
    cout << greedy(n, m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}