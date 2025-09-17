#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
vector<tuple<int,int,int>> adj[MAXN];
int p[MAXN];
int low, high;

void dfs(int u, int parent) {
    for (auto &[v,x,y] : adj[u]) {
        if (v == parent) continue;
        if (x > y) p[v] = low++;  // parent > child
        else p[v] = high--;       // parent < child
        dfs(v, u);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) adj[i].clear();

        for (int i = 0; i < n-1; i++) {
            int u,v; long long x,y;
            cin >> u >> v >> x >> y;
            adj[u].emplace_back(v,x,y);
            adj[v].emplace_back(u,x,y);
        }

        low = 1; high = n;
        p[1] = low++;
        dfs(1, 0);

        for (int i = 1; i <= n; i++) cout << p[i] << ' ';
        cout << '\n';
    }
}
