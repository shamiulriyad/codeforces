#include <bits/stdc++.h>
using namespace std;
#define long long ll;

void solve(int tc)
{
    ll n,x;
    cin>>n>>x;
    
    ll ans = 0;
    
    ll a, p=0;
    for(int i=0;i<n;i++){
        cin>>a;
        
        ans= max(ans, a-p);
        p=a;
        
    }
 
    ans=max(ans,2*(x-p));
    cout<<ans<<"\n";
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
