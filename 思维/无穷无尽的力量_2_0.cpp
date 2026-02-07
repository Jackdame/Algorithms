#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    if (n == 1 || m == 1)
        cout << 1;
    else if (n == 2 || m == 2)
        cout << (n + m - 1) / 2;
    else if (n == 3 && m == 3)
        cout << n * m - 1;
    else
        cout << n * m;
    return 0;
}