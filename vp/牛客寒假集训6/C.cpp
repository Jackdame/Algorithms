#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;


void solve()
{
    int n,m,l;cin>>n>>m>>l;
    vector<int> x(n+1),y(m+1),s(n+1),s1(m+1);
    for(int i=1;i<=n;++i) cin>>x[i];
    for(int i=1;i<=m;++i) cin>>y[i];
    for(int i=1;i<=n;++i) s[i]=s[i-1]+x[i];
    for(int i=1;i<=m;++i) s1[i]=s1[i-1]+y[i];
    if(l>s[1]) {
        cout<<"YES";
        return;
    }
    for(int i=1;i<=m;++i){
        if(s[i]>s1[i] && s[i]<s1[i]+l) {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}
