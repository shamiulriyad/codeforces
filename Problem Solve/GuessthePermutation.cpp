#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    vector<int>ans(n);
    vector<int>freq(n + 1, 0);

    for(int i = 0; i < n; i++) {

        int mx = 0;

        for(int j = 0; j < n; j++){
            mx = max(mx, a[i][j]);


        }
        ans[i] = mx;
        if(mx >= 1 && mx <= n) freq[mx]++;
    }

    int missing = -1, duplicate = -1;
    for(int i = 1; i <= n; i++) {
        if(freq[i] == 0) missing = i;


        else if(freq[i] > 1) duplicate = i;


    }

    if(missing != -1 && duplicate != -1){
        for(int i = 0; i < n; i++){


            if(ans[i] == duplicate){
                ans[i] = missing;
                break;
            }
        }
    }

   for(int i=0;i<n;i++) {
    cout << ans[i] << (i<n-1?' ':'\n');

   }

}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
   // cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
