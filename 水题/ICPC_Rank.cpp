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
const LL mod = 1e9 + 7;
const int N = 1e5;

void Solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > a)
        cout << "B";
    else if (a > b)
        cout << "A";
    else
    {
        if (c > d)
            cout << "B";
        else if (d > c)
            cout << "A";
        else
            cout << "C";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
