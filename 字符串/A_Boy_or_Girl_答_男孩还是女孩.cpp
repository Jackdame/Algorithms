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
using namespace std;
using LL = long long;
const int INF = 0x3f3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5;

int q[26] = {0};

void Solve()
{
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            q[0]++;
        if (s[i] == 'b')
            q[1]++;
        if (s[i] == 'c')
            q[2]++;
        if (s[i] == 'd')
            q[3]++;
        if (s[i] == 'e')
            q[4]++;
        if (s[i] == 'f')
            q[5]++;
        if (s[i] == 'g')
            q[6]++;
        if (s[i] == 'h')
            q[7]++;
        if (s[i] == 'i')
            q[8]++;
        if (s[i] == 'j')
            q[9]++;
        if (s[i] == 'k')
            q[10]++;
        if (s[i] == 'l')
            q[11]++;
        if (s[i] == 'm')
            q[12]++;
        if (s[i] == 'n')
            q[13]++;
        if (s[i] == 'o')
            q[14]++;
        if (s[i] == 'p')
            q[15]++;
        if (s[i] == 'q')
            q[16]++;
        if (s[i] == 'r')
            q[17]++;
        if (s[i] == 's')
            q[18]++;
        if (s[i] == 't')
            q[19]++;
        if (s[i] == 'u')
            q[20]++;
        if (s[i] == 'v')
            q[21]++;
        if (s[i] == 'w')
            q[22]++;
        if (s[i] == 'x')
            q[23]++;
        if (s[i] == 'y')
            q[24]++;
        if (s[i] == 'z')
            q[25]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (q[i] != 0)
            count++;
    }
    if (count % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}