#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int b=-1;
    int sp=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            b=i+k;
            
        }
        
        else{
            if(i>b){
                sp++;
            
            }
        }
    }
    cout << sp;
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
