#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    vector<int>b(n+2, 0);
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[a[i]]++;
    }

    int cm= 0;
    for(int i = 0; i < k; i++){
        if(b[i] == 0)cm++;
    


    }

    int ami =b[k];



    int ans = max(cm,ami);
    cout << ans << "\n";





}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
