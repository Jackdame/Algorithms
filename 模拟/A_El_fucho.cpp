#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, win = 0, lose = 0;
        cin >> n;
        win = n;
        while (win > 1 || lose > 1)
        {
            int x = win / 2;
            cnt += x;
            win -= x;
            int y = lose / 2;
            cnt += y;
            lose -= y;
            lose += x;
        }
        cout << cnt + 1 << endl;
    }
}