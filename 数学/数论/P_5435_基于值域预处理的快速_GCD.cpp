#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 10;
const int mod = 998244353;
long long ans, n;
int x[10000];
int y[10000];
int gcd(int a, int b)
{
    int az = __builtin_ctz(a), bz = __builtin_ctz(b);
    int z = min(az, bz);
    int dif;
    b >>= bz;
    while (a)
    {
        a >>= az;
        dif = b - a;
        az = __builtin_ctz(dif);
        if (a < b)
            b = a;
        if (dif < 0)
            a = -dif;
        else
            a = dif;
    }
    return b << z;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> y[i];
    }
    for (int i = 1; i <= n; i++)
    {
        ans = 0;
        long long num = i; // num和ans必须要开long long
        for (int j = 1; j <= n; j++)
        {
            ans += num * gcd(x[i], y[j]);
            ans %= mod; // 每次计算完之后取一次余避免误差
            num = num * i % mod;
        }
        cout << ans % mod << endl;
    }
    return 0;
}
