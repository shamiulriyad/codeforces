#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        multiset<int> swords;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            swords.insert(x);
        }
        
        vector<pair<int, int>> monsters(m);
        for (int i = 0; i < m; i++) {
            cin >> monsters[i].first;
        }
        for (int i = 0; i < m; i++) {
            cin >> monsters[i].second;
        }
        
        // Sort monsters by b[i] ascending
        sort(monsters.begin(), monsters.end());
        
        int killed = 0;
        for (int i = 0; i < m; i++) {
            int b = monsters[i].first;
            int c = monsters[i].second;
            
            // Find the smallest sword that can kill this monster
            auto it = swords.lower_bound(b);
            if (it == swords.end()) {
                // No sword can kill this monster
                continue;
            }
            
            killed++;
            int used = *it;
            swords.erase(it);
            
            if (c > 0) {
                swords.insert(max(used, c));
            }
        }
        cout << killed << "\n";
    }
    
    return 0;
}
/*
5
3 2
2 2 2
2 3
3 2
2 3
2 3
2 3 4
0 0 0
3 5
1 7 7
6 6 2 2 2
2 0 0 7 2
4 4
1 5 3 5
7 4 6 5
0 0 1 6
2 2
1 1000000000
1000000000 1
1000000000 0


*/