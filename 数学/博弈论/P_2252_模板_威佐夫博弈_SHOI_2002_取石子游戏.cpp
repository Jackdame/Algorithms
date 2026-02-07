/*
打个表先
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[110][110]; // 1 -> 必胜, 0 -> 必败

int main() {
    memset(f, 0, sizeof(f));
    f[0][0] = 0;
    for (int a = 0; a <= 100; a++) {
        for (int b = a; b <= 100; b++) {
            for (int k = 1; k <= a; k++) {
                f[a][b] |= f[a - k][b] ^ 1;
                f[a][b] |= f[a - k][b - k] ^ 1;
            }
            for (int k = 1; k <= b; k++) {
                f[a][b] |= f[a][b - k] ^ 1;
            }
            f[b][a] = f[a][b];
            if (!f[a][b]) printf("%d %d\n", a, b);
        }
    }
}

0 0
1 2
3 5
4 7
6 10
8 13
9 15
11 18
12 20
14 23
16 26
17 28
19 31
21 34
22 36
24 39
25 41
27 44
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b;

int main()
{
    scanf("%lld%lld", &a, &b);
    /*if (a == 0 && b == 0) {
        printf("0\n");
        return 0;
    }*/
    // 不用特判！
    if (a > b)
        swap(a, b);
    ll k = b - a;
    ll l = (a * 2 - k) * (a * 2 - k);
    ll m = 5 * k * k;
    ll r = ((a + 1) * 2 - k) * ((a + 1) * 2 - k);
    if (l <= m && m < r)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
