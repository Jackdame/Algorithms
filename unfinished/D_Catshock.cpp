#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
vector<int> g[N];
int parent[N];
bool on_path[N];
vector<int> instructions;

void dfs(int u, int p)
{
    parent[u] = p;
    for (int v : g[u])
    {
        if (v == p)
            continue;
        dfs(v, u);
    }
}

void solve(int u)
{
    instructions.push_back(1);
    for (int v : g[u])
    {
        if (v == parent[u])
            continue;
        if (!on_path[v])
        {
            instructions.push_back(v);
            instructions.push_back(1);
            solve(v);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            g[i].clear();
            on_path[i] = false;
        }
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(n, -1);

        int cur = 1;
        while (cur != -1)
        {
            on_path[cur] = true;
            cur = parent[cur];
        }

        instructions.clear();
        solve(1);

        cout << instructions.size() << endl;
        for (int instr : instructions)
        {
            if (instr == 1)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2 " << instr << endl;
            }
        }
    }
    return 0;
}