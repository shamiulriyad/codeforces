#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    a--; 

    for(int d = 0; d < n; d++) {
        int left = a - d;
        int right = a + d;

        if(left < 0 && right >= n) break; 
        if(left >= 0 && right < n) {
            if(v[left] == 1 && v[right] == 1) {
                if(left == right) ans += 1;
                else ans += 2;
            }
        } 
        else if(left >= 0) {
            if(v[left] == 1) ans += 1;
        } 
        else if(right < n) {
            if(v[right] == 1) ans += 1;
        }
    }

    cout << ans << endl;
    return 0;
}
