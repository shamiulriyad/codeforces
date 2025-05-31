#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc) {
    long long n, k;
    string s;
    cin >> n >> k >> s;
    ll c1=0,c2=0;
    for (auto z:s) {
        if (z == '0') c1++;
        else c2++;
    }
    ll d= abs(c1-c2)/2;
    if(k<d){
        cout << "NO";
    }
    else if((k-d)%2==0){
        cout << "YES\n";
    }
    else cout << "NO\n";
   
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
