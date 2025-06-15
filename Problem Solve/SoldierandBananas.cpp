#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k,n,w;
    cin >> k >> n >> w;
    int a=0;
    a= (k*w*(w+1))/2;
    if(a<=n){
        cout << 0 << endl;
    }
    else{
        cout << a-n << endl;
    }

   
}

signed main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}