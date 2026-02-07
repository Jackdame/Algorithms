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
#include <unordered_map>
#include <cstring>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define req(i, a, n) for (int i = a; i <= n; ++i)
#define rep(i, a, n) for (int i = a; i >= n; --i)
#define pb push_back
#define int long long
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 110;
bool r[N];
void Solve() // 某大神标记模拟法 但是感觉慢
{
    int n, m, s = 0;
    cin >> n >> m;
    req(j, 1, n)
    {
        req(i, 0, m - 1)
        {
            if (++s > n)
            {
                s = 1;
            }
            if (r[s])
                i--;
        }
        cout << s << " ";
        r[s] = true;
    }
}
struct node
{
    int id, next;
} nodes[N];
void dylist()
{
    int n, m;
    cin >> n >> m;
    nodes[0].next = 1;
    req(i, 1, n)
    {
        nodes[i].id = i;
        nodes[i].next = i + 1;
    }
    nodes[n].next = 1;
    int now = 1, prev = n;
    while ((n--) > 1)
    {
        req(i, 1, m - 1)
        {
            prev = now;
            now = nodes[now].next;
        }
        printf("%d ", nodes[now].id);
        nodes[prev].next = nodes[now].next;
        now = nodes[prev].next;
    }
    printf("%d", nodes[now].id);
}

void Solve2()
{
    // 直觉要用队列做
    int n, m, now = 1;
    queue<int> q;
    cin >> n >> m;
    req(i, 1, n)
        q.push(i);
    while (!q.empty())
    {
        if (now == m)
        {
            cout << q.front() << " ";
            q.pop();
            now = 1;
        }
        else
        {
            now++;
            q.push(q.front());
            q.pop();
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    dylist();
    return 0;
}
