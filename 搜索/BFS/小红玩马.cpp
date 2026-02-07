#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
typedef pair<int, int> PII;
const int N = 1010;
int dx[8] = {-1, -2, -2, -1, 1, 2, 2, 1}, dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int n, m, k, x1, y3, x2, y2, step;
bool sb = false;
int b[N][N];
PII pre[N][N];
vector<PII> bfs()
{
    bool find = false;
    queue<PII> q;
    memset(b, -1, sizeof b);
    memset(pre, -1, sizeof pre);
    int sx = x1 - 1, sy = y3 - 1;
    int ex = x2 - 1, ey = y2 - 1;
    if (sx == ex && sy == ey)
    {
        sb = true;
        return {};
    }
    b[sx][sy] = 0;
    q.push({sx, sy});
    while (!q.empty())
    {
        auto t = q.front();
        q.pop();
        int x = t.first, y = t.second;
        if (b[x][y] == k)
            continue;
        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m)
            {
                if (b[nx][ny] == -1)
                {
                    b[nx][ny] = b[x][y] + 1;
                    pre[nx][ny] = {x, y};
                    if (nx == ex && ny == ey)
                    {
                        step = b[nx][ny];
                        vector<PII> path;
                        int cx = nx, cy = ny;
                        while (cx != -1)
                        {
                            path.push_back({cx, cy});
                            PII prev = pre[cx][cy];
                            cx = prev.first;
                            cy = prev.second;
                        }
                        reverse(path.begin(), path.end());
                        return path;
                    }
                    q.push({nx, ny});
                }
            }
        }
    }
    return {};
}
int main()
{
    cin >> n >> m >> k;
    cin >> x1 >> y3 >> x2 >> y2;
    vector<PII> path = bfs();
    int k1 = k - step;
    if (sb)
    {
        if (k == 0)
        {
            cout << "Yes" << endl;
        }
        else if (k % 2 != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            int sx0 = x1 - 1, sy0 = y3 - 1;
            bool found = false;
            int adj_x = -1, adj_y = -1;
            for (int i = 0; i < 8; i++)
            {
                int nx = sx0 + dx[i], ny = sy0 + dy[i];
                if (nx >= 0 && ny >= 0 && nx < n && ny < m)
                {
                    found = true;
                    adj_x = nx + 1;
                    adj_y = ny + 1;
                    break;
                }
            }
            if (found)
            {
                cout << "Yes" << endl;
                for (int i = 0; i < k / 2; i++)
                {
                    cout << adj_x << " " << adj_y << endl;
                    cout << x1 << " " << y3 << endl;
                }
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    else
    {
        if (!path.empty() && k1 % 2 == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i < path.size(); i++)
            {
                auto p = path[i];
                cout << p.first + 1 << " " << p.second + 1 << endl;
            }
            for (int i = k1; i > 0; i -= 2)
            {

                auto p1 = path[path.size() - 1];
                auto p2 = path[path.size() - 2];
                cout << p2.first + 1 << " " << p2.second + 1 << endl;
                cout << p1.first + 1 << " " << p1.second + 1 << endl;
            }
        }
        else
            cout << "No" << endl;
    }
    return 0;
}