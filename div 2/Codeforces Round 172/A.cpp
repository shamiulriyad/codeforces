#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    string s;
    cin >> s;
    
    
    if(s[0]>='a' && s[0]<='z'){
        s[0]=s[0]-32;
    }

    cout << s ;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    //cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
