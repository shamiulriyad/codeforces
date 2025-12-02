#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    
    // Check if possible
    vector<int> prefix_min(n), suffix_max(n);
    prefix_min[0] = p[0];
    for (int i = 1; i < n; i++) {
        prefix_min[i] = min(prefix_min[i-1], p[i]);
    }
    suffix_max[n-1] = p[n-1];
    for (int i = n-2; i >= 0; i--) {
        suffix_max[i] = max(suffix_max[i+1], p[i]);
    }
    
    for (int k = 1; k < n; k++) {
        if (prefix_min[k-1] > suffix_max[k]) {
            cout << "No\n";
            return;
        }
    }
    
    cout << "Yes\n";
    
    // Construction
    vector<pair<int, int>> edges;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && p[st.top()] > p[i]) {
            st.pop();
        }
        if (!st.empty()) {
            edges.push_back({p[st.top()], p[i]});
        }
        st.push(i);
    }
    
    // Output edges
    for (auto& [u, v] : edges) {
        cout << u << " " << v << "\n";
    }
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