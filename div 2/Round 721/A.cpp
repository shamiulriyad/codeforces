#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    int ans=n;
    
    for(int i=n;i>0;i=(i&(i-1))){
      ans= i;
       if((i&(i-1))==0){
        ans=i-1;
        break;
       }
       
    }
    cout << ans << endl;
   
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
