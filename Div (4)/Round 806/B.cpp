#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str1;
        cin >> str1;
        map<char, bool> visited;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (visited[str1[i]]) {
                ans++;
            } else {
                ans += 2;
                visited[str1[i]] = true;
            }
        }
        cout << ans << endl; 
    }
    return 0;
}
