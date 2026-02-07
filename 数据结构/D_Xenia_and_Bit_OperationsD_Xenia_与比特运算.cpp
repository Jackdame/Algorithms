#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <numeric>
#include <map>
#include <set>
#include <string>
#include <stack>
#include <iomanip>
using namespace std;
using LL = long long;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e6;
int n, m;
int segTree[N];

void Solve()
{
    cin >> n >> m;
    int size = 1 << n;

    // 读入初始数组
    for (int i = 0; i < size; i++)
    {
        cin >> segTree[size + i];
    }

    // 构建线段树
    // 使用更简单的方法：从叶子层往上，第0层（叶子层）用OR，第1层用XOR...
    for (int level = n; level > 0; level--)
    {
        int start = 1 << (level - 1);
        int end = 1 << level;

        for (int i = start; i < end; i++)
        {
            int left = i * 2;
            int right = i * 2 + 1;

            // 从叶子层往上：level=n时用OR，level=n-1时用XOR...
            // 即 (n - level) % 2 == 0 时用OR
            if ((n - level) % 2 == 0)
            {
                segTree[i] = segTree[left] | segTree[right];
            }
            else
            {
                segTree[i] = segTree[left] ^ segTree[right];
            }
        }
    }

    // 处理查询
    while (m--)
    {
        int p, b;
        cin >> p >> b;
        p--; // 转换为0-indexed

        // 更新叶子节点
        int pos = size + p;
        segTree[pos] = b;

        // 向上更新
        pos /= 2;
        int level = n - 1; // 父节点所在的层数

        while (pos > 0)
        {
            int left = pos * 2;
            int right = pos * 2 + 1;

            // 根据层数决定操作
            if ((n - level - 1) % 2 == 0)
            {
                segTree[pos] = segTree[left] | segTree[right];
            }
            else
            {
                segTree[pos] = segTree[left] ^ segTree[right];
            }

            pos /= 2;
            level--;
        }

        cout << segTree[1] << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
