#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <numeric>
#include <map>
#include <set>
#include <string>
#include <stack>
#include <iomanip>
#include <unordered_map>\
using namespace std;
using LL = long long;
typedef pair<LL, int> PII;
const LL INF = 1e18;
const LL mod = 1e9 + 7;
const int N = 1e5 + 10;
struct Edge
{
    int to;
    LL weight;
    Edge(int t, LL w) : to(t), weight(w) {}
};
vector<vector<Edge>> g(N);
vector<LL> dj(int start, int n, vector<int> &parent)
{
    vector<LL> dist(n + 1, INF);
    vector<bool> vis(n + 1, false);
    parent.assign(n + 1, -1);
    priority_queue<PII, vector<PII>, greater<PII>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while (!pq.empty())
    {
        int u = pq.top().second;
        LL d = pq.top().first;
        pq.pop();
        if (vis[u])
            continue;
        vis[u] = true;
        for (const Edge &e : g[u])
        {
            int v = e.to;
            LL w = e.weight;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

void print(int start, int end, const vector<int> &parent)
{
    if (parent[end] == -1 && end != start)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> path;
    int cur = end;
    while (cur != -1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }
    reverse(path.begin(), path.end());
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i];
        if (i < path.size() - 1)
            cout << " ";
    }
    cout << endl;
}
void add(int u, int v, int w)
{
    g[u].push_back(Edge(v, w));
    g[v].push_back(Edge(u, w));
}
void Solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
    }
    vector<int> parent;
    vector<LL> dist = dj(1, n, parent);
    if (dist[n] == INF)
    {
        cout << -1 << endl;
    }
    else
        print(1, n, parent);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}
