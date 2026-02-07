#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
#define req(i, a, n) for (int i = a; i <= n; ++i)
const int N = 1e3 + 10;
int n, m;
int d[N][N];
bool p[N][N];
int bfs()
{   
    queue<PII> q;
    memset(d, -1, sizeof d);
    d[0][m-1] = 0;
    q.push({0, m-1});
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    while (q.size())
    {
        auto t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = t.first + dx[i], y = t.second + dy[i];
            if (x >= 0 && x < n + 2 && y >= 0 && y < m && p[x][y] && d[x][y] == -1)
            {
                d[x][y] = d[t.first][t.second] + 1;
                q.push({x, y});
                if(x == n+1 && y == 0)
                {
                    return d[x][y];
                }
            }
        }
    }
    return -1;
}

int main()
{
    memset(p, true, sizeof p);
    cin >> n >> m;
    req(j,1,n)
    {
        int s;
        char dir;
        cin >> s >> dir;
        if(dir == 'R')
        {
            req(i,s-1,m-1)
            {
                p[j][i] = false;
            }

        }
        else 
        {
            req(i, 0,s-1)
            {
                p[j][i] = false;
            }
        }
    }
    cout << (bfs() != -1 ? "YES" : "NO");
    return 0;
}
