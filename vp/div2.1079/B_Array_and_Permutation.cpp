#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isGenerating(const vector<int> &p, const vector<int> &a)
{
    int n = p.size();
    if (a.size() != n)
        return false;

    unordered_set<int> pSet(p.begin(), p.end());
    for (int num : a)
    {
        if (pSet.find(num) == pSet.end())
        {
            return false;
        }
    }

    int i = 0, j = 0;
    while (j < n)
    {

        if (j > 0 && a[j] == a[j - 1])
        {
            j++;
            continue;
        }
        if (i >= n)
        {
            return false;
        }
        if (p[i] == a[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isGenerating(p, a))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
