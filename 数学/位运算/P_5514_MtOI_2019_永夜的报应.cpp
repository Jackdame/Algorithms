#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, ans;
    scanf("%d", &n);
    scanf("%d", &ans);
    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &a);
        ans ^= a;
    }
    cout << ans;
    return 0;
}
