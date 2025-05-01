#include<bits/stdc++.h>
using namespace std;

   void solve(){
    long long n,m,a;
    cin >> n >> m >> a;
    long long l = (n+a-1)/a;
    long long w = (m+a-1)/a;
    long long t =l*w;

    cout <<t << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    solve(); 

    return 0;
}

