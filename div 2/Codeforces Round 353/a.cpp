#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int a,b,c;
    cin >> a >> b >> c;
    
    if(c == 0) {
        if(a == b) cout << "YES\n";
        else cout << "NO\n";
    }else {
        if((b - a) % c == 0 && (b - a) / c >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }




   
    
   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
  //  cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
