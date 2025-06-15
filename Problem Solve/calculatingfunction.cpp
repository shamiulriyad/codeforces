#include<bits/stdc++.h>
using namespace std;

   void solve(){
    long long int n;
cin>>n;
long long int e=n/2;
long long int o=n-e;
long long int result=e*(e+1)-o*o;
cout<<result;
}

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    solve(); 

    return 0;
}

