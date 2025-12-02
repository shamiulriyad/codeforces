#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    string s;
    cin >> s;
    string y;
    cin >> y;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
    }
    for(int i=0;i<y.size();i++){
        if(isupper(y[i])){
            y[i]=tolower(y[i]);
        }
    }
    
    
    if(s==y)cout<<0<<endl;
    else if(s>y)cout<<1<<endl;
    else cout<<-1<<endl;

    
   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
   // cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
