#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int vertex, edge;
 
    cin >> vertex >> edge;

    vector<vector<pair<int,int>>> graph(vertex + 1);

    for (int i = 0; i < edge; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w}); 
    }

    int source = 1;

    vector<long long> distance(vertex + 1, 1e18);
    vector<int> parent(vertex + 1, -1);
    distance[source] = 0;

    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        auto [dist, u] = pq.top();
        pq.pop();
        if (dist != distance[u]) continue;

        for (auto [v, w] : graph[u]) {
            if (distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                parent[v] = u; 
                pq.push({distance[v], v});
            }
        }
    }
    if(distance[vertex] == 1e18) {
        cout << "-1\n";
        return 0;
    }

   
    vector<int> path;
    for (int v = vertex; v != -1; v = parent[v])
        path.push_back(v);

    reverse(path.begin(), path.end());
    for (int v : path)
        cout << v << " ";
    cout << "\n";

    return 0;
}
