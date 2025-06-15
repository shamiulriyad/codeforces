#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n,m,p,q;
    cin >> n >> m >> p >> q;
    if(n%p==0){
        if(q*n/p==m){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    else{
        cout << "YES"<<'\n';
    }
   
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
