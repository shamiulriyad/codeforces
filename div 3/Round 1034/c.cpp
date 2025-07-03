#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin >> n;
    vector<int> a(n+1),pref(n+1,INT_MAX),suff(n+2);
    for(int i=1;i<=n;i++) cin >> a[i];
    
    for(int i=1;i<=n;i++) pref[i] = min(pref[i-1],a[i]);
 
    for(int i=n;i>=1;i--) suff[i] = max(suff[i+1],a[i]);
 
    for(int i=1;i<=n;i++) cout << (a[i]==pref[i] || a[i]==suff[i]) ? 1 : 0;
 
    cout << '\n';
}
 
int main(){
    int t;cin >> t;
    while(t--) solve();
    return 0;
}