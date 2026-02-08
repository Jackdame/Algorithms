#include <iostream>
#include <vector>
#define req(i, a, n) for (int i = a; i <= n; ++i)
using namespace std;

typedef long long ll;
const int MOD = 676767677;

int solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int ans = 0;
    req(k, 0, 1)
    {
        vector<int> x(n);
        x[0] = k;
        bool possible = true;
        ll cur = x[0];
        req(i, 1, n - 1)
        {
            x[i] = (a[i] - a[i - 1] + 1) - x[i - 1];
            if (x[i] < 0 || x[i] > 1)
            {
                possible = false;
                break;
            }
            cur += x[i];
        }
        if (possible)
        {
            if (a[0] == (x[0] + n - cur))
            {
                ans++;
            }
        }
    }

    return ans % MOD;
}

int main()
{
    // sfreopen("x.in","r",stdin);
    // freopen("x.out","w",stdout);
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
    return 0;
}