#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=a[i];

    }
    cout<< -(sum) << endl;
    
   
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
