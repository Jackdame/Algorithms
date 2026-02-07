#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> e(n);
    for (int i = 0; i < n; i++)
    {
        cin >> e[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));
    dp[1][1] = e[0];
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + e[i - 1];
        dp[i][1] = dp[i - 1][0] + e[i - 1];
    }
    cout << max(dp[n][0], dp[n][1]);
    return 0;
}