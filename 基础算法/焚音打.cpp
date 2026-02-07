#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first > b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> m(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i].second >> m[i].first;
        }
        sort(m.begin(), m.end(), cmp);
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt = cnt + m[i].second - (m[i].first * i);
        }
        cout << cnt << endl;
    }
}