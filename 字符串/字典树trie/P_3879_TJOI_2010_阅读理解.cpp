#include <map>
#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100001;
int n, m, num, cnt[maxn];
string s;
map<string, vector<int>> a;
int main()
{
    std::ios::sync_with_stdio(false); // 要关闭同步，快很多
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        for (int j = 1; j <= num; j++)
        {
            cin >> s;
            a[s].push_back(i); // vector的压入操作。我每一个单词就是一个vector。
        }
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> s;
        memset(cnt, 0, sizeof(cnt));          // cnt就是去重的桶。每用一次输出不同的查询要清零。
        for (int j = 0; j < a[s].size(); j++) // a[s].size()是vector自动返回其长度的函数。
            if (cnt[a[s][j]] == 0)
            {
                cout << a[s][j] << " "; // 我们存的就是答案所求的所出现的句子的编号，所以直接输出不多bb。而且存的时候也是按顺序所记录的。
                cnt[a[s][j]]++;         // 别忘了用桶去重！
            }
        cout << endl;
    }
    return 0;
}
//map做法如上
//还有tries树加哈希做法