#include <bits/stdc++.h>
using namespace std;
void solve(int tc) {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) cout << "I hate";
        else cout << "I love";

        if(i < n) cout << " that ";
        else cout << " it";
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    //cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
