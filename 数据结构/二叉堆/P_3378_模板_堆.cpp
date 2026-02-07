#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> q;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int op;
        scanf("%d", &op);
        if (op == 1)
        {
            int x;
            scanf("%d", &x);
            q.push(-x);
        }
        if (op == 2)
            printf("%d\n", -q.top());
        if (op == 3)
            q.pop();
    }
    return 0;
}
