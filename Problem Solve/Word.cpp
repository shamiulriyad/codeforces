#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    string s;
    cin >> s;
    int lcount=0,ucount=0;
    for(int i=0;i<s.length();i++){
        if(islower(s[i])){
            lcount++;
        }
        else{
            ucount++;
        }
    }
    if(lcount>=ucount){
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
    }
    
    cout << s;
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
