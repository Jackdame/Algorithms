#include <bits/stdc++.h>
using namespace std;
int n, x, ans[100005], t, cnt, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x)
            t++;
        ans[i] = -1;
    }
    ans[0] = -1;
    ans[t] = 0;
    cnt = 0;
    bool f = 1;
    while (f)
    {
        f = 0;
        for (int i = 0; i <= n; i++)
        {
            if (ans[i] != cnt || ans[i] == -1)
                continue;
            for (int j = max(0, m - n + i); j <= min(m, i); j++)
            {

                int ne = i - j + m - j;
                if (ans[ne] != -1)
                    continue;
                ans[ne] = ans[i] + 1;
                f = 1;
            }
        }
        cnt++;
    }
    cout << ans[0] << " " << ans[n];
    return 0;
}