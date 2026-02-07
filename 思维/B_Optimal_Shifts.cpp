#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        vector<int> divs;
        for (int i = 1; i * 1ll * i <= n; ++i)
        {
            if (n % i == 0)
            {
                divs.push_back(i);
                if (i * i != n)
                    divs.push_back(n / i);
            }
        }

        ll ans = (1ll << 60);
        for (int g : divs)
        {
            int L = n / g;
            bool ok = true;
            int worst = 0;
            for (int start = 0; start < g; ++start)
            {
                string t;
                t.reserve(L);
                for (int k = 0; k < L; ++k)
                    t.push_back(s[start + k * g]);
                if (t.find('1') == string::npos)
                {
                    ok = false;
                    break;
                }
                int cur = 0, mx = 0;
                for (int k = 0; k < 2 * L; ++k)
                {
                    if (t[k % L] == '0')
                    {
                        cur++;
                        mx = max(mx, cur);
                    }
                    else
                        cur = 0;
                }
                mx = min(mx, L);
                worst = max(worst, mx);
            }
            if (ok)
                ans = min(ans, 1ll * g * worst);
        }

        cout << ans << '\n';
    }
    return 0;
}
