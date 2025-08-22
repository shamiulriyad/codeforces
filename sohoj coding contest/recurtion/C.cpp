#include<bits/stdc++.h>

using namespace std;

void power(int x, int n, int& c,int itr = 1,int sum = 0)
{
   
    if (sum == x)
    {

        
        c++;
        return;
    }
    else if ( sum > x)
        return;

   
    for (int i = itr; i <= pow(x, 1.0/n); i++)
    {
        power(x, n, c, ++itr, sum + pow(i, n));
    }
}

void solve()
{
    
    int c= 0;
    int x, n;
    cin >> x;
    cin >> n;
    
    power(x, n, c);

   
    cout << c << endl;

    
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
   // cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve();
        cout << endl;
    }

    return 0;
}
