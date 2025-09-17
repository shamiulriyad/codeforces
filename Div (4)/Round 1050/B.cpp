#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
      int n, m;
    long long x, y;
    cin >> n >> m >> x >> y;
    vector<long long> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];



        for(int j = 0; j < m; j++) cin >> b[j];

    int jokkori = 0;
    
    
    
    
   int  jokkori2 = 0;
    
    for(int i = 0; i < n; i++) {
        
        if(a[i] < y) jokkori++;
    }
    for(int j = 0; j < m; j++) {
       
       
        if(b[j]< x)  jokkori2++;
    }



    cout <<(jokkori+jokkori2)<< "\n";








   
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
