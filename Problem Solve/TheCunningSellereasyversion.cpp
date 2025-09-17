#include <bits/stdc++.h>
using namespace std;

#define  ll long long

ll amiparina(ll x){
    ll val= pow(3,x+1) + x*pow(3,x-1);
    return val;
}
void solve(int tc)
{
    ll n, ans=0,sum=0, c ;
    
    cin >> n;

    while(n>0){
        c=log(n)/log(3);
        if(pow(3,c+1)==n){
            c=c+1;
        }
        ans+=amiparina(c);
        n-=pow(3,c);

    }
    cout << ans <<"\n" << endl;
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
