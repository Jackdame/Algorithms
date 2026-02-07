#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>
#define MAXN 500005
#define LOG 20
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))
long long sum[MAXN], table[MAXN][LOG];
namespace RMQ
{
    void init(int n)
    {
        for (int i = 1; i <= n; i++)
            table[i][0] = i;
        for (int j = 1; (1 << j) <= n; j++)
            for (int i = 1; i + (1 << j) - 1 <= n; i++)
            {
                int x = table[i][j - 1], y = table[i + (1 << (j - 1))][j - 1];
                table[i][j] = sum[x] > sum[y] ? x : y;
            }
    }
    int query(int l, int r)
    {
        int k = log2(r - l + 1);
        int x = table[l][k], y = table[r - (1 << k) + 1][k];
        return sum[x] > sum[y] ? x : y;
    }
}
struct element
{
    int o, l, r, t;
    element() {}
    element(int o, int l, int r) : o(o), l(l), r(r), t(RMQ::query(l, r)) {}
    friend bool operator<(const element &a, const element &b)
    {
        return sum[a.t] - sum[a.o - 1] < sum[b.t] - sum[b.o - 1];
    }
};
std::priority_queue<element> Q;
int main()
{
    int n, k, L, R;
    scanf("%d%d%d%d", &n, &k, &L, &R);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &sum[i]);
        sum[i] += sum[i - 1];
    }
    RMQ::init(n);
    for (int i = 1; i <= n; i++)
        if (i + L - 1 <= n)
            Q.push(element(i, i + L - 1, min(i + R - 1, n)));
    long long ans = 0;
    while (k--)
    {
        int o = Q.top().o, l = Q.top().l, r = Q.top().r, t = Q.top().t;
        Q.pop();
        ans += sum[t] - sum[o - 1];
        if (l != t)
            Q.push(element(o, l, t - 1));
        if (t != r)
            Q.push(element(o, t + 1, r));
    }
    printf("%lld\n", ans);
    return 0;
}
/*
贪心 + 堆 + RMQ

首先可以看到，每段超级和弦都是连续的，美妙度是这段区间内所有美妙度的和。可以想到，每次求解区间和显然是不合算的，所以考虑到用前缀和。

考虑暴力，我们需要把所有满足条件的字段抽出来排个序，但这实在是不可想象。所以考虑使用贪心思想来解决这个问题。

先想预处理。我们定义 MAX(o,l,r)=max{sum(t)−sum(o−1) ∣ l≤t≤r} ,即以 o 为左端点，右端点范围是 [l,r] 的最大子段。求 sum() 就用前面说的前缀和。可以看出，o 的位置是固定的。所以 sum(o−1) 也是固定的。所以我们要求这个的最大值，只要 sum(t) 最大就可以了。即要求 sum(t) 在 [l,r] 中的最大值，那怎么快速地求出这个最大值呢？很显然，这不是 RMQ 的活么。对 RMQ 不熟悉的可以参考这 。当然，具体计算的时候还要看看上界 r 是否超过了 n 。

接下来想怎么贪心。我们可以每次都选最优的子段，这样选 k 次显然就是我们所要的结果，那怎么找到最优解呢？用堆来将解存进去，每次堆顶的元素就是最优解。

考虑一个三元组 (o,l,r) 表示以 o 为左端点，右端点的选择区间为 [l,r] 的 情况，我用了一个 struct 来表示这个三元组，但往往实际上每个情况需要额外记录这个情况的最优解 t ，这个不麻烦，在 struct 里面敲一个构造函数就可以了。

我们假设当前最大的三元组是 (o,l,r) 。最优解位置是 t 。ans 累加这个三元组的贡献。由于 t 已经被选中，对于这个 o， t 已经不能重复选中，但最优解还可能存在于 t 左右的两端区间中，所以提取出 (o,l,r) 之后，为了避免重复且不丧失其他较优解，我们仍然要把 (o,l,t−1) , (o,t+1,r) 扔回堆里面去。显然地，在放回去之前应该保证区间的存在，即 l=t 或 r=t 的情况要进行特判。

最后实现的时候还要注意一点，RMQ 原本数组里面记录的是最优解的值，但我们查询区间最大值的时候查询的是最优解的位置。所以数组里面存的是最优解的位置，要特殊处理。
*/