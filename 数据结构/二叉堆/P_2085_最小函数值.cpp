#include <iostream>
using namespace std;
struct DUI
{
    int val; // 箭头表示的函数值
    int x;   // 每个函数都有被输入进来的先后顺序，这个是第x个输入进来的函数
    // 因为堆里面的节点总是在变化的，所以我们要记录哪个函数在哪个位置
} a[10010];
int heap_size;            // 堆的大小
void CHANGE(int m, int n) // 自己写的交换函数
{
    int t;
    t = a[m].val;
    a[m].val = a[n].val;
    a[n].val = t;
    t = a[m].x;
    a[m].x = a[n].x;
    a[n].x = t;
}
void MIN_HEAPIFY(int i)
{
    int l = i * 2;     // 右子节点
    int r = i * 2 + 1; // 左子节点
    int smallest;      // 记录父子节点值最小的那个
    if (l <= heap_size && a[l].val < a[i].val)
        smallest = l;
    else
        smallest = i;
    if (r <= heap_size && a[r].val < a[smallest].val)
        smallest = r;  // 父子节点中值最小的位置
    if (smallest != i) // 父节点最大则不变
    {
        CHANGE(i, smallest);   // 子节点大则交换父子节点
        MIN_HEAPIFY(smallest); // 交换后继续往下维护
    }
}
void BUILD_HEAP() // 建立小根堆
{
    int i;
    for (i = heap_size / 2; i > 0; i--)
        MIN_HEAPIFY(i); // 自底向上建堆
}
int main()
{
    int n, m, i, j;
    int A[10010], B[10010], C[10010];
    int F[10010]; // 每个函数的"箭头"位置
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> A[i] >> B[i] >> C[i];
        F[i] = 1;
        a[i].val = A[i] * F[i] * F[i] + B[i] * F[i] + C[i];
        a[i].x = i; // 输入的顺序，第i个被输进来的
    }
    heap_size = n;
    BUILD_HEAP();
    for (i = 0; i < m; i++)
    {
        cout << a[1].val << ' ';                                                          // 输出最小函数值
        F[a[1].x]++;                                                                      // 它所在的函数中的"箭头"往后移
        a[1].val = A[a[1].x] * F[a[1].x] * F[a[1].x] + B[a[1].x] * F[a[1].x] + C[a[1].x]; //"箭头"变则值变
        MIN_HEAPIFY(1);                                                                   // 自顶向下维护堆
    }
    return 0;
}
