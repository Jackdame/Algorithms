#include <bits/stdc++.h>
using namespace std;

char s[1000001];
int main()
{
    long long mod = 1000000007, n, ans = 0, k, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
    }
    k = 1;
    for (i = n; i >= 1; i--)
    {
        k = (k * i) % mod;
        ans = (ans + k) % mod;
    }
    cout << ans;
    return 0;
}