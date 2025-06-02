
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(int tc)
{
     int n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }
    bool f=true;
    for (int i = 0; i < n; ++i)
    {
        if(v[i]<=2*max(i,n-i-1)){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
