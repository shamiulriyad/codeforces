#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    vector<long long> g(n);
    for(auto &x : g) cin >> x;

    sort(g.begin(),g.end());

    long long ans = 0;
  
    for(int i=1;i<n;i+=2) ans +=g[i];
   
    if(n%2==1) ans+=g.back();

    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;
    for (tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << '\n';
    }
    return 0;
}
