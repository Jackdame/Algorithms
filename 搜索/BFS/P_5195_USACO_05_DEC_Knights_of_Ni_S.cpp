#include <cstdio>
const int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
const int MAXN = 1000 + 10;
int map[MAXN][MAXN];
struct Node
{
    int x, y;
    bool tag;
    // tag 记录是否已取得灌木。
} que[MAXN * MAXN];
Node make(int x, int y, bool tag)
{
    Node t;
    t.x = x, t.y = y;
    t.tag = tag;
    return t;
}
int l, r;
int dis[MAXN][MAXN][2];
bool vis[MAXN][MAXN][2];
int ex, ey;
int main()
{
    int w, h;
    scanf("%d%d", &w, &h);
    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j)
        {
            scanf("%d", &map[i][j]);
            if (map[i][j] == 2)
            {
                que[r++] = make(i, j, false);
                vis[i][j][0] = true;
            }
            if (map[i][j] == 3)
            {
                ex = i, ey = j;
            }
            // 处理起点与终点。
        }
    }
    for (int i = 1; i <= h; ++i)
    {
        map[i][0] = map[i][w + 1] = 1;
    }
    for (int j = 1; j <= w; ++j)
    {
        map[0][j] = map[h + 1][j] = 1;
    }
    // 处理边界。
    while (l != r)
    {
        Node t = que[l++];
        int x = t.x, y = t.y;
        bool tag = t.tag;
        if (x == ex && y == ey && tag)
        {
            break;
        }
        // 到达终点且取得灌木才能结束。
        for (int i = 0; i < 4; ++i)
        {
            int u = x + dx[i], v = y + dy[i];
            bool w = tag || (map[u][v] == 4);
            // 若此前已取得灌木，或当前位置长有灌木，则当前状态下已取得灌木。
            if (!vis[u][v][w] && map[u][v] != 1)
            {
                dis[u][v][w] = dis[x][y][tag] + 1;
                vis[u][v][w] = true;
                que[r++] = make(u, v, w);
            }
        }
    }
    printf("%d", dis[ex][ey][1]);
    return 0;
}
