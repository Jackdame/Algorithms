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
    int n;
    cin >> n;
    while (n--)
    {
        LL l, r, count1 = 0;
        cin >> l >> r;
        if (l >= 162)
            cout << 0 << endl;
        else if (r <= 162)
        {
            for (LL i = l; i <= r; i++)
            {
                LL x = i * i, count = 0;
                string s = to_string(x);
                for (int j = 0; j < s.size(); j++)
                {
                    int m = s[j] - '0';
                    count += m;
                }
                if (count == i)
                    count1++;
            }
            cout << count1 << endl;
        }
        else if (l < 162 && r > 162)
        {
            for (LL i = l; i <= 162; i++)
            {
                LL x = i * i, count = 0;
                string s = to_string(x);
                for (int j = 0; j < s.size(); j++)
                {
                    int m = s[j] - '0';
                    count += m;
                }
                if (count == i)
                    count1++;
            }
            cout << count1 << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
