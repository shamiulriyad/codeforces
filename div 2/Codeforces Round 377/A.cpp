#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int k,r,sum=0;
    cin >> k >> r;
    for(int i=1;;i++){
        sum+=k;
        if((sum%10==0) || (sum%10==r)){
            cout << i <<endl;
            break;
        }
        continue;

    }
   
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
