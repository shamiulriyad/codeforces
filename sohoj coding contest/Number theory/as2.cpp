#include <bits/stdc++.h>
using namespace std;
const int MAX = 105;
vector<int> adj[MAX];
bool v[MAX];
int dfs(int n) {
    v[n] = true;
    int size = 1;
    for(int ne : adj[n]) {
        if (!v[ne]) {
            size += dfs(ne);
        }
    }
    return size;
}
void solve() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < MAX; i++) {
        adj[i].clear();
        v[i] = false;
    }
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int max_size = 0;
    for(int i = 1; i <= n; i++) {
        if (!v[i]) {
            max_size = max(max_size, dfs(i));
        }
    }
    cout << max_size;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    cout << endl;

    return 0;
}
