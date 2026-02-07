#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> g(n);
    for (int i = 0; i < n; ++i)
        cin >> g[i];

    int dr[4] = {1, -1, 0, 0}, dc[4] = {0, 0, 1, -1};
    auto inb = [&](int r, int c)
    { return r >= 0 && r < n && c >= 0 && c < n; };

    int ans = 0;
    for (int si = 0; si < n; ++si)
    {
        for (int sj = 0; sj < n; ++sj)
        {
            if (g[si][sj] != '.')
                continue;
            g[si][sj] = 'W';
            vector<vector<char>> vis(n, vector<char>(n, 0));
            bool ok = true;
            for (int i = 0; i < n && ok; ++i)
            {
                for (int j = 0; j < n && ok; ++j)
                {
                    if (g[i][j] != 'W' || vis[i][j])
                        continue;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    vis[i][j] = 1;
                    bool hasLib = false;
                    while (!q.empty())
                    {
                        auto [r, c] = q.front();
                        q.pop();
                        for (int d = 0; d < 4; ++d)
                        {
                            int nr = r + dr[d], nc = c + dc[d];
                            if (!inb(nr, nc))
                                continue;
                            if (g[nr][nc] == '.')
                                hasLib = true;
                            else if (g[nr][nc] == 'W' && !vis[nr][nc])
                            {
                                vis[nr][nc] = 1;
                                q.push({nr, nc});
                            }
                        }
                    }
                    if (!hasLib)
                        ok = false;
                }
            }
            if (ok)
                ++ans;
            g[si][sj] = '.';
        }
    }

    cout << ans << "\n";
    return 0;
}
