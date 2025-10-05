


// this code give you tle 







#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
     int n, x;
    cin >> n >> x; 
    int sum = 0;
    int count=0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            sum = i * j;
            if(sum==x) count++;
           
        }
        
    }
    cout << count << endl;
   
   
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
