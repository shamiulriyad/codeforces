#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n,y,r; 
    cin >> n>>y >> r;
    int s=r+(y/2);

    s=min(s,n);


    cout << s << endl;


    
   
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
