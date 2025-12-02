#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    
    vector<int> sum(n),ssum(n);
    sum[0] = p[0];
    for(int i = 1; i < n; i++) {
        sum[i] =min(sum[i-1], p[i]);
    }
    ssum[n-1] = p[n-1];
    for(int i = n-2;i>= 0; i--) {
        ssum[i] = max(ssum[i+1], p[i]);
    }
    
    for(int k = 1; k < n; k++) {
        if(sum[k-1] > ssum[k]) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}