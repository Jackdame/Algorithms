#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int n, m, a[N];
long long c[N]; // 注意 c 中的值可能超过 int 范围
int lowbit(int x)
{
    return x & (-x);
}
void add(int x, int k)
{ // 修改操作
    while (x <= n)
    {
        c[x] += k;
        x += lowbit(x);
    }
    return;
}
long long sum(int x)
{ // 查询操作
    long long res = 0;
    while (x)
    {
        res += c[x];
        x -= lowbit(x);
    }
    return res;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        add(i, a[i] - a[i - 1]); // 按照差分含义初始化
    }
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r, k;
            cin >> l >> r >> k;
            add(l, k), add(r + 1, -k); // 差分操作
        }
        else
        {
            int x;
            cin >> x;
            cout << sum(x) << "\n"; // 前 x 个数的和
        }
    }
    return 0;
}
