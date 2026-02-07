#include <cstdio>
#define ll long long
const ll mo = 998244353, N = 200005;

int n, i;
ll l, r;
char s[N];
inline ll upd(ll x)
{
    if (x >= mo)
        return x % mo;
    else
        return x;
}
ll xp(ll x, ll y)
{
    if (y == 0)
        return 1;
    return xp(upd(x * x), y >> 1) * ((y & 1) ? x : 1) % mo;
} // x^y
ll qw(ll x)
{
    ll res = 0;
    for (ll i = 1; i <= x; i++)
    {
        res *= 10;
        res += s[i] - '0';
        res %= mo;
    }
    return res;
} // s的前x位
ll qs(ll x)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    ll f = qs(x >> 1);
    f = (f + upd(f * xp(10, n * (x >> 1)))) % mo;
    if (x & 1)
        f += xp(10, n * (x - 1)), f = upd(f);
    return f;
} // 10010010...
ll qm(ll x)
{
    ll f = qs(x / n) * qw(n) % mo;
    return (f * xp(10, x % n) % mo + qw(x % n)) % mo;
} // 字符串的前x位
int main()
{
    scanf("%d%lld%lld", &n, &l, &r);
    scanf("%s", s + 1);
    printf("%lld", (qm(r) - qm(l - 1) * xp(10, r - l + 1) % mo + mo) % mo);
    return 0;
}
