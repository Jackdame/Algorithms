#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;


void solve()
{
    i64 m,n,z;
    cin >> m >> n >> z;
    while(z/(m+n)>=1){
        z%=(m+n);
    }
    if(z==0) cout<<1;
    else if(m>=z) cout<<0;
    else if(m<z) cout<<1;
}

signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
