#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        { // 如果 n%i==0，说明找到了 n 的因数，直接输出 n/i，退出循环。
            printf("%d", n / i);
            return 0;
        }
    }
    return 0;
}
