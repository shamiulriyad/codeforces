#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n; cin>>n;
        long long x;
        vector<long long>a(n);
        long long mn = LLONG_MAX, mx = LLONG_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
        cin>>x;
        if(mn <= x && x <= mx) cout<<"YES\n"; else cout<<"NO\n";
    }
    
   


signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
