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
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> stu(3);
        cin >> stu[0] >> stu[1] >> stu[2];
        sort(stu.begin(), stu.end());
        if (stu[1] != 0)
            count++;
    }
    cout << count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
