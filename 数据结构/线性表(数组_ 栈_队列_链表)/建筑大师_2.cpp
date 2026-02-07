#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int a[N];
int main()
{
    int n;
    cin >> n;
    stack<int> stk, ans;
    for (int i = n; i >= 1; i--)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        int u = a[i];
        while (stk.size() && u > stk.top())
            stk.pop();
        stk.push(u);
        ans.push(stk.size());
    }
    while (ans.size())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    return 0;
}