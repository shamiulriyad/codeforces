#include <bits/stdc++.h>
using namespace std;

int countZERO(int n){
    int c=0;
    for(int i=5;n/i>=1;i*=5){
        c+=n/i;
    }
    return c;
}

void solve()
{
    int n;
    cin >> n;
    int a= countZERO(n);
    cout << a << endl;
   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    //cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
       solve();
        //cout << endl;
    }

    return 0;
}
