#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '.') {
            count++;
            ans++;
            if(count >= 3) {  
                cout << 2;
                return;
            }
        } else {
            count = 0; 
        }
    }
    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;

    for(int tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << "\n";
    }

    return 0;
}
