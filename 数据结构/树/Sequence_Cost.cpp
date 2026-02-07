#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<ll> A, S, M, Z, D;
vector<int> Lc, Rc;

void dfs(int u)
{
    if (!u)
        return;
    int l = Lc[u], r = Rc[u];
    dfs(l);
    dfs(r);
    S[u] = A[u] + (l ? S[l] : 0) + (r ? S[r] : 0);
    M[u] = max(A[u], max(l ? M[l] : LLONG_MIN, r ? M[r] : LLONG_MIN));
    Z[u] = 1 + (l ? Z[l] : 0) + (r ? Z[r] : 0);
    ll o1 = S[u];
    ll o2 = M[u] + Z[u] * A[u];
    ll o3 = (l ? D[l] : 0) + (r ? D[r] : 0) + A[u];
    D[u] = min(o1, min(o2, o3));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        cin >> n;
        A.assign(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> A[i];
        Lc.assign(n + 1, 0);
        Rc.assign(n + 1, 0);
        vector<int> st;
        for (int i = 1; i <= n; i++)
        {
            int last = 0;
            while (!st.empty() && A[st.back()] > A[i])
            {
                last = st.back();
                st.pop_back();
            }
            if (!st.empty())
                Rc[st.back()] = i;
            Lc[i] = last;
            st.push_back(i);
        }
        int r = st.front();
        S.assign(n + 1, 0);
        M.assign(n + 1, 0);
        Z.assign(n + 1, 0);
        D.assign(n + 1, 0);
        dfs(r);
        cout << D[r] << '\n';
    }
    return 0;
}
