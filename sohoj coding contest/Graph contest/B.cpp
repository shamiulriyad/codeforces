#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005], par(100005);
int vis[100005];

void bfs(int s) {
    queue<int> q;
    vis[s] = 1;
    q.push(s);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = vis[u] + 1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);

    if (!vis[n]) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<int> path;
    int x = n;
    while (x != 0) {
        path.push_back(x);
        x = par[x];
    }
    reverse(path.begin(), path.end());

    cout << path.size() << "\n";
    for (int v : path) cout << v << " ";
    cout << "\n";

    return 0;
}
