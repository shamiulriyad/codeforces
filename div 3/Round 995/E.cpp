#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int n, k;
 
void solve() {
	cin >> n >> k;
 
	map<int, pair<int, int>> m;
	for (int i=0, a; i<n; ++i) {
		cin >> a;
		++m[a].first;
	}
	for (int i=0, b; i<n; ++i) {
		cin >> b;
		++m[b].second;
	}
 
	ll ans = 0;
	int rem = n, neg = 0;
	for (const auto &[p, info] : m) {
		if (neg <= k) ans = max(ans, 1ll * rem * p);
		neg += info.first - info.second;
		rem -= info.second;
	}
 
	cout << ans << '\n';
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int t; cin >> t;
	while (t--)
		solve();
}