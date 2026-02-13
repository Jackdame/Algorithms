#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;
const int N = 2050;
i64 dp[N];
void solve(){
    int n;cin>>n;
    vector<i64> a(n+1),b(n+1);
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i) cin>>b[i];
    set<i64> s;
    s.insert(0);
    for(int i=1;i<=n;++i){
        set<i64> nxt;
        for(auto c : s){
            i64 x0 = max(0LL,c-a[i]);
            nxt.insert(x0);
            i64 x1 = c^b[i];
            nxt.insert(x1);
        }
        s = move(nxt);
    }
    i64 mx=0;
    for(auto c : s){
        mx = max(mx,c);
    }
    cout<<mx<<endl;
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
