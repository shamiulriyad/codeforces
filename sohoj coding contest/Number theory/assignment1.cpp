#include <bits/stdc++.h>
using namespace std;
const int MAX = 105;
vector<int> adj[MAX];
bool v[MAX];
void dfs(int n) {
    v[n] = true;
    for (int ne : adj[n]) {
        if (!v[ne]) {
            dfs(ne);
        }
    }
}
void solve() {
    int n,m;
    cin >>n>> m;
for(int i = 0; i < MAX; i++) {
        adj[i].clear();
        v[i] = false;
    }
    for(int i= 0;i<m;i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int co = 0;
    for(int i=1;i<=n;i++) {
        if (!v[i]) {
            co++;
            dfs(i);
        }
    }
    cout << co;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    cout << endl;

    return 0;
}
