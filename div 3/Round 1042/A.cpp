#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            ans+=a[i]-b[i];
        }
        //cout << (ans+1)<< endl;
    }
     cout << (ans+1)<< endl;


   
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
