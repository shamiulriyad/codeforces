#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
     int n;
    cin >> n;
    
    int w = n;
    int l = 0;
    int m = 0;

    while(w + l> 2) {
        int wi = w / 2;
        m += wi;
        l += wi;
        w= w - wi;

        int lo = l / 2;
        m += lo;
        l = l - lo;
    }

    m+= 1;
      if(n == 2) m += 1;

    cout << m << endl;
   
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
