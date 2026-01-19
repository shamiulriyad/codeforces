#include <bits/stdc++.h>
using namespace std;

const int gdCode = 1044;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){  
        cin >> b[i];
    }
    
    string abc;
    cin >> abc;
    
    unordered_set<int>bcd(b.begin(), b.end());
    unordered_set<int>efg;
    for(int pos : a) efg.insert(pos);
    
    vector<int> result(k);
    int offset = 0;
    
    for(int i = 0; i < k; i++) {
        if(abc[i] == 'L') offset--;
        else offset++;
        
        vector<int>t;
        for(int ro: efg) {
            int c= ro + offset;
            if(bcd.find(c) != bcd.end()) {
                t.push_back(ro);
            }
        }
        
        for(int j = 0; j < t.size(); j++) {
            int robot = t[j];
            efg.erase(robot);
        }
        result[i] = efg.size();
    }
    
    for(int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
        if(t > 0) cout << "\n";
    }
    return 0;
}