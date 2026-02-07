#include <bits/stdc++.h>
using namespace std;
int lxy[180010][22], hrb[180010][21], n, m, i, j, k, l, r;
// lxy数组用于求最大值，hrb数组用于求最小值
int ST(int l, int r) // O(1)调用QWQ
{
    int s = log2(r - l + 1), x, y;
    // log2(r-l+1)是以2为底的对数，写成等式就是，2的log2(r-l+1)次方等于(r-l+1);
    x = max(lxy[l][s], lxy[r - (1 << s) + 1][s]); // 区间最大
    y = min(hrb[l][s], hrb[r - (1 << s) + 1][s]); // 区间最小
    // 神奇的冻柜方程QWQ，记下来就好，反正不长
    return x - y; // 返回差值
}
int main()
{
    scanf("%d%d", &n, &m); // 输入
    for (i = 1; i <= n; i++)
        scanf("%d", &lxy[i][0]), hrb[i][0] = lxy[i][0]; // 因为要用两个数组QWQ
    for (i = 1; i <= 21; i++)                           // 这个循环的上界决定于数据的大小，即2的21次方大于数据，如果数据在大上界调高，logn是这个循环QWQ
        for (k = 1; k + (1 << i) <= n + 1; k++)         // 接进于n，算成n，其实没那么大
        {
            lxy[k][i] = max(lxy[k][i - 1], lxy[k + (1 << (i - 1))][i - 1]);
            hrb[k][i] = min(hrb[k][i - 1], hrb[k + (1 << (i - 1))][i - 1]);
            // 神奇冻柜方程处理QWQ，不理解，也可以下来，只有4行
        }
    for (i = 1; i <= m; i++) // O(1)调用开始
    {
        scanf("%d%d", &l, &r);
        printf("%d\n", ST(l, r)); // 上面的函数，直接输出返回值
    }
    return 0; // 结束
}
