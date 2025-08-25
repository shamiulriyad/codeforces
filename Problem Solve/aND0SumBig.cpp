#include <bits/stdc++.h>
using namespace std;
 #define mod 1000000007
typedef long long int ll;

int power(ll base, int p){
    ll ans=1;
    while(p){

    
    if(p%2==1)
        {
            ans=(ans*base)%mod;
            p--;
        }
        else{
            base=(base*base)%mod;
            p/=2;
        }
    }
    return ans%mod;
}
void solve(int tc)
{
    int n,k;
    cin >> n >> k;
    cout << power(n,k)  << endl;
   
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
