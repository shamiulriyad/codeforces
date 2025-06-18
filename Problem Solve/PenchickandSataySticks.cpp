#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i] - a[i-1] == -1){
            swap(a[i],a[i-1]);
        }
    }
   cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO");

   
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
