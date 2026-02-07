    #include <bits/stdc++.h>
    using namespace std;
    void Solve()
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        long long sleep = 0;
        int last = -1; 
        for (int i = 0; i <= n - 1; ++i)
        {
            if (s[i] == '1')
            {
                int forced = min(n - 1, i + k); 
                last = max(last, forced);
            }
            if (i > last)
                ++sleep;
        }
        cout << sleep << '\n';
    }
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while(t--)
            Solve();
        return 0;
    }
