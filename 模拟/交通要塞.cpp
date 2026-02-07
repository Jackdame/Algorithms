#include <bits/stdc++.h>
using namespace std;

long long l[100005], r[100005];

int main()
{
    long long n, i, lt = 0, rt = 1e12;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> l[i] >> r[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (lt + 1 > r[i] || rt + 1 < l[i])
        {
            cout << "-1";
            return 0;
        }
        lt = max(lt + 1, l[i]);
        rt = r[i];
    }
    cout << lt + 1;
    return 0;
}