#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0;i<n;i++)cin >>a[i];
    for(int i =0;i<n;i++)cin >> b[i];
    
    ll mx = -1e18, mn = 1e18;
    
    mx = max(-a[0], b[0]);
    mn = min(-a[0], b[0]);
    
    for(int i =1;i< n;i++) {
        ll new_mx =max(mx-a[i],b[i]-mn);
        ll new_mn = min(mn- a[i], b[i]-mx);

        mx =new_mx;
        mn = new_mn;
    }
    
    cout << mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}