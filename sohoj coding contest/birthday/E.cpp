#include <bits/stdc++.h>
using namespace std;
 
void solve(int tc)
{

    int n, m;
    if(!(cin>>n>>m)) return;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >>a[i];
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >>b[i];
    long long pp= 0;
    for(int i = 0; i < n; i++){
        pp += a[i];
    }
    long long p = LLONG_MAX;



    for(int i=0;i< (1 << m);i++){

        long long ppp= 1;

        for(int j = 0;j < m; j++){
            if (i& (1<<j)) ppp *= b[j];
        }
        if (ppp>p) p = ppp;
    }
    if(p>1)p=1;
 cout << pp*p << endl;

  
   
}
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int tc, tt = 1;
   // cin >> tt;
 
    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
      //  cout << endl;
    }
 
    return 0;
}