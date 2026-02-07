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
#define fi first
#define se second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pb push_back
using namespace std;
using LL = long long;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;

struct Team
{
    string name;
    int solved = 0;
    LL penalty = 0;
    array<bool, 13> done;
    array<int, 13> wrong;
    Team() { done.fill(false); wrong.fill(0);}
    Team(const string& s):name(s) {done.fill(false);wrong.fill(0);}
};


void Solve()
{
    int n;
    cin >> n;
    unordered_map<string, int> id;
    vector<Team> teams;
    teams.reserve(10000);
    req(i,0,n-1)
    {
        string s;
        char ch;
        int flag, t;
        cin >> s >> ch >> flag >> t;
        int pid = ch - 'A';
        if(!id.count(s))
        {
            id[s] = teams.size();
            teams.emplace_back(s);
        }
        Team &team = teams[id[s]];
        if(team.done[pid]) continue;
        if(flag == 0)
            team.wrong[pid] += 1;
        else{
            team.done[pid] = true;
            team.solved += 1;
            team.penalty += t + 20LL * team.wrong[pid];
        }
    }
    int best = 0;
    req(i,1,teams.size()-1)
    {
        if(teams[i].solved > teams[best].solved)
            best = i;
        else if(teams[i].solved == teams[best].solved && teams[i].penalty < teams[best].penalty)
            best = i;
    }
    cout << teams[best].name << " " << teams[best].solved << " " << teams[best].penalty << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();

    return 0;
}
